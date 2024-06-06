/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:57:47 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/01 11:49:13 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	if (48 <= c && c <= 57)
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
//	i = ft_isdigit(*argv[1]);
//	printf("%d\n", i);
//	return (0);
//}
