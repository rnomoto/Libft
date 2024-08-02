/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:15:15 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/01 11:46:48 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z' ) || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	int result1 = 0;
// 	int result2 = 0;
// 	int i = -1;
// 	char j = 'A';
// 	result1 = ft_isalpha(i);
// 	result2 = ft_isalpha(j);
// 	printf("input:%d output:%d\n", i, result1);
// 	printf("input:%c output:%d\n", j, result2);
// 	return (0);
// }
