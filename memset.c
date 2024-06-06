/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:00:04 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/06 16:18:51 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char			*str;
	unsigned char	tmp;

	tmp = c;
	str = s;
	while (0 < n)
	{
		str[n - 1] = tmp;
		n--;
	}
	return (str);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(int argc, char **argv)
//{
//	char	*result;
//
//	if (argc != 4)
//	{
//		printf("Error\n");
//		return (1);
//	}
//	result = ft_memset(argv[1], atoi(argv[2]), atoi(argv[3]));
//	printf("%s\n", result);
//	return (0);
//}
