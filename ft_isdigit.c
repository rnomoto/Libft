/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:57:47 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/21 13:07:05 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int result1, result2 = 0;
// 	int i = 46;
// 	char j = '0';
// 	result1 = ft_isdigit(i);
// 	result2 = ft_isdigit(j);
// 	printf("input: %d, output: %d\n", i, result1);
// 	printf("input: %c, output: %d\n", j, result2);
// 	return (0);
// }
