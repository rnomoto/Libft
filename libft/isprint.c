/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:48:05 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/01 14:52:57 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (32 <= c && c <= 126)
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
//	i = ft_isprint(*argv[1]);
//	printf("%d\n", i);
//	return (0);
//}
