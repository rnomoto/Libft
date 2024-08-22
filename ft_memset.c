/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:00:04 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/22 22:25:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*str_cast;

	index = 0;
	str_cast = (unsigned char *)str;
	while (index < n)
	{
		str_cast[index] = c;
		index++;
	}
	return (str_cast);
}

// int main(void)
// {
// 	char *str = (char *)malloc(20 * sizeof(char));
// 	int c = 'a';
// 	size_t n = 5;

// 	ft_memset(str, c, n);

// 	printf("%s\n", str);

// 	return (0);
// }
