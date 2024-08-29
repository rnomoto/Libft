/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:00 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/29 19:41:58 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
		return (src_len + size);
	else
	{
		while (dest[i] != '\0')
			i++;
		while (i + 1 < size && *src)
		{
			dest[i] = *src;
			i++;
			src++;
		}
		dest[i] = '\0';
	}
	return (dest_len + src_len);
}

// int main(void)
// {
//     char dst[] = "pqrstuvwxyz";
//     const char *src = "abcd";

//     printf("dst: %s\n", dst);
//     printf("src: %s\n", src);

//     size_t result = ft_strlcat(dst, src, 20);
//     printf("dst_cat: %s output: %zu\n", dst, result);

//     return (0);
// }