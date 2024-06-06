/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:58:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/01 10:57:28 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	int	i;
//
//	(void)argc;
//	i = 0;
//	i = ft_strlen(argv[1]);
//	printf("%d\n", i);
//	return (0);
//}
