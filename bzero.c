/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:27:48 by rnomoto           #+#    #+#             */
/*   Updated: 2024/05/06 16:41:24 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *str, size_t n)
{
	char	*dest;

	dest = str;
	while (0 < n)
	{
		dest[n - 1] = '0';
		n--;
	}
	return (dest);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(int argc, char **argv)
//{
//	char	*result;
//
//	if (argc != 3)
//	{
//		printf("Error!\n");
//		return (1);
//	}
//	result = ft_bzero(argv[1], atoi(argv[2]));
//	printf("%s\n", result);
//	return (0);
//}
