/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:38:26 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/21 13:06:42 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int i = 40;
// 	int j = '(';
// 	int result1, result2 = 0;
// 	result1 = ft_isascii(i);
// 	printf("input: %d, output: %d\n", i, result1);
// 	result2 = ft_isascii(j);
// 	printf("input: %c, output: %d\n", j, result2);

// 	return (0);
// }
