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

int	ft_isalpha(char c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

//#include <stdio.h>
//
// int main(int argc, char **argv)
//{
//	(void) argc;
//	int i;
//	i = ft_isalpha(*argv[1]);
//	printf("%d\n", i);
//	return (0);
//}
