/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:27:48 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 18:21:09 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			index;
	unsigned char	*str_cast;

	index = 0;
	str_cast = (unsigned char *)str;
	while (index < n)
	{
		str_cast[index] = 0;
		index++;
	}
}

/*
int main(void)
{
	int count = 0;
	
	printf("mem: 10, size: 10\n");
	char *mem_ft1 = (char *)malloc(10 * sizeof(char));
	char *mem_lb1 = (char *)malloc(10 * sizeof(char));
	ft_bzero(mem_ft1, 10);
	bzero(mem_lb1, 10);
	if (strncmp(mem_ft1, mem_lb1, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft1);
	free(mem_lb1);
	printf("\n");

	printf("mem: 10, size: 1\n");
	char *mem_ft2 = (char *)malloc(10 * sizeof(char));
	char *mem_lb2 = (char *)malloc(10 * sizeof(char));
	strlcpy(mem_ft2, "123456789", 10);
	strlcpy(mem_lb2, "123456789", 10);
	ft_bzero(mem_ft2, 1);
	bzero(mem_lb2, 1);
	if (strncmp(mem_ft2, mem_lb2, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft2);
	free(mem_lb2);
	printf("\n");

	// printf("mem: NULL, size: 1\n");
	// char *mem_ft3 = NULL;
	// char *mem_lb3 = NULL;
	// ft_bzero(mem_ft3, 1);
	// bzero(mem_lb3, 1);
	// if (strncmp(mem_ft3, mem_lb3, 10) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// printf("\n");

	// printf("mem: 1, size: 5\n");
	// char *mem_ft4 = (char *)malloc(1 * sizeof(char));
	// char *mem_lb4 = (char *)malloc(1 * sizeof(char));
	// ft_bzero(mem_ft4, 5);
	// bzero(mem_lb4, 5);
	// if (strncmp(mem_ft4, mem_lb4, 5) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// free(mem_ft2);
	// free(mem_lb2);
	// printf("\n");

	if (count == 0)
		printf("ALL OK\n");
	else if (count == 1)
		printf("1 test failed.\n");
	else if (count > 1)
		printf("%d tests failed.\n", count);

	return 0;
}
*/