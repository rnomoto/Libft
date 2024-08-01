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
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

#include <stdio.h>

int main(void)
{
	int i, result = 0;
	scanf("%d", &i);
	result = ft_isalpha(i);
	printf("%d\n", result);
	return (0);
}

//入力が66の時は正しいが、'a'の時に正しい出力にならない。
