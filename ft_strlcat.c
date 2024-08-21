/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:00 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/21 21:22:20 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	if (str == NULL)
		return (0);
	else
	{
		while (str[index] != '\0')
			index++;
		return (index);
	}
}

char *ft_strncat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;

    while (dst[i] != '\0')
        i++;
    while (i + j < size - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';

    return dst;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);

    ft_strncat(dst, src, size);

    if (dst_len >= size)
        return (size + dst_len);
    else 
        return (dst_len + src_len);
}

int main(void)
{
    char dst[100] = "42Tokyo.";
    const char *src = "Hello World!";
    size_t result = 0;

    printf("dst: %s\n", dst);
    printf("src: %s\n", src);

    result = ft_strlcat(dst, src, 25);
    printf("dst_cat: %s output: %zu\n", dst, result);

    return 0;
}