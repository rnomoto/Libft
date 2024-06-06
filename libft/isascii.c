/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:38:26 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/01 14:43:26 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

//#include <stdio.h>
//
// int main(int argc, char **argv)
//{
//	(void)argc;
//	int i;
//	i = ft_isascii(*argv[1]);
//	printf("%d\n", i);
//	return (0);
//}
