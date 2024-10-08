/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:48:05 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/21 13:07:24 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int i = 48;
// 	char j = '0';
// 	int k = 0;

// 	printf("input: %d, output: %d\n", i, ft_isprint(i));
// 	printf("input: '%c', output: %d\n", j, ft_isprint(j));
// 	printf("input: %d, output: %d\n", k, ft_isprint(k));

// 	return 0;
// }
