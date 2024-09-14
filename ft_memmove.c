/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:12:31 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 14:14:58 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(char *dest, char *src, size_t len)
{
	while (len > 0)
	{
		dest[len - 1] = src[len - 1];
		len--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dest_cast;
	char	*src_cast;

	dest_cast = (char *)dest;
	src_cast = (char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest > src && dest < src + len)
		ft_memrcpy(dest_cast, src_cast, len);
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

// int main(void)
// {
//     char buffer[] = "1234567890";
//     char *dest = buffer + 4;
//     const char *src = buffer;

//     printf("dst: %s\n", dest);
//     printf("src: %s\n", src);

//     ft_memmove(dest, src, 6);
//     printf("result: %s\n", src);

//     return (0);
// }