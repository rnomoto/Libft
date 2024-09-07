/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:53:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/07 11:59:12 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*dest_cast;
	const unsigned char	*src_cast = (const unsigned char *)src;

	index = 0;
	dest_cast = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while (index < n)
	{
		dest_cast[index] = src_cast[index];
		index++;
	}
	return (dest);
}

// int main(void)
// {
// 	//char *dest = (char *)malloc(20 * sizeof(char));
// 	const unsigned char src[20] = "Hello World!";

// 	unsigned char *result = ft_memcpy((void *)0, (void *)0, 3);

// 	printf("src: %s, dest: %s\n", src, result);

// 	return (0);
// }