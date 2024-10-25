/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:00 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/25 13:49:22 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	
	if (size == 0 && dest == NULL)
		dest_len = 0;
	else
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
//     //char dst[0xF] = "nyan !";
//     const char *src = "abcd";

// 	size_t expected = strlcat(((void *)0), src, 0);
//     size_t result = ft_strlcat(((void *)0), src, 0);
// 	printf("ft_strlcat: %zu\n", result);
// 	printf("strlcat   : %zu\n", expected);

//     return (0);
// }