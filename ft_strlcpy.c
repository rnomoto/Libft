/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:29:58 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/29 17:43:43 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	result;

	i = 0;
	result = 0;
	result = ft_strlen(src);
	if (size == 0)
		return (result);
	while (src[i] != '\0' && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (result);
}

// int main(void)
// {
//     const char *src = "Hello World!";
//     char *dst = (char *)malloc((sizeof(char)) * 10);

//     printf("dst(before): %s\n", dst);
//     printf("dstsize: %lu\n", sizeof(dst));
//     printf("src: %s\n", src);
//     size_t result = ft_strlcpy(dst, src, sizeof(dst));
//     printf("srcsize: %zu\n", result);
//     printf("dst(after): %s\n", dst);

//     free(dst);
//     return (0);
// }
