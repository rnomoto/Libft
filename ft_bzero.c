/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:27:48 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/23 11:59:43 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	size_t index = 0;
	unsigned char *str_cast = (unsigned char *)str;

	while (index < n)
	{
		str_cast[index] = '0';
		index++;
	}
	return (str_cast);
}

// int main(void)
// {
// 	char *str = (char *)malloc(20 * sizeof(char));
// 	size_t n = 15;

// 	ft_bzero(str, n);

// 	printf("%s\n", str);

// 	return 0;
// }