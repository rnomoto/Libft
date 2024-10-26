/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:00:04 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 18:03:28 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*str_cast;
	unsigned char c_cast;

	index = 0;
	str_cast = (unsigned char *)str;
	c_cast = (unsigned char)c;
	while (index < n)
	{
		str_cast[index] = c_cast;
		index++;
	}
	return (str_cast);
}


int main(void)
{
	int count = 0;
	
	printf("mem: 10, c: 'a' size: 10\n");
	char *mem_ft1 = (char *)malloc(10 * sizeof(char));
	char *mem_lb1 = (char *)malloc(10 * sizeof(char));
	mem_ft1 = ft_memset(mem_ft1, 'a', 10);
	mem_lb1 = memset(mem_lb1, 'a', 10);
	printf("ft_memset: %s\n", mem_ft1);
	printf("   memset: %s\n", mem_lb1);
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

	printf("mem: 10, c: 'a' size: 0\n");
	char *mem_ft2 = (char *)malloc(10 * sizeof(char));
	char *mem_lb2 = (char *)malloc(10 * sizeof(char));
	strlcpy(mem_ft2, "123456789", 10);
	strlcpy(mem_lb2, "123456789", 10);
	mem_ft2 = ft_memset(mem_ft2, 'a', 1);
	mem_lb2 = memset(mem_lb2, 'a', 1);
	printf("ft_memset: %s\n", mem_ft2);
	printf("   memset: %s\n", mem_lb2);
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

	printf("mem: 10, c: 0 size: 10\n");
	char *mem_ft3 = (char *)malloc(10 * sizeof(char));
	char *mem_lb3 = (char *)malloc(10 * sizeof(char));
	mem_ft3 = ft_memset(mem_ft3, 0, 10);
	mem_lb3 = memset(mem_lb3, 0, 10);
	printf("ft_memset: %s\n", mem_ft3);
	printf("   memset: %s\n", mem_lb3);
	if (strncmp(mem_ft3, mem_lb3, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft3);
	free(mem_lb3);
	printf("\n");

	printf("mem: 10, c: 128 size: 10\n");
	char *mem_ft4 = (char *)malloc(10 * sizeof(char));
	char *mem_lb4 = (char *)malloc(10 * sizeof(char));
	mem_ft4 = ft_memset(mem_ft4, 128, 10);
	mem_lb4 = memset(mem_lb4, 128, 10);
	printf("ft_memset: %s\n", mem_ft4);
	printf("   memset: %s\n", mem_lb4);
	if (strncmp(mem_ft4, mem_lb4, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft4);
	free(mem_lb4);
	printf("\n");

	printf("mem: 10, c: -1 size: 10\n");
	char *mem_ft5 = (char *)malloc(10 * sizeof(char));
	char *mem_lb5 = (char *)malloc(10 * sizeof(char));
	mem_ft5 = ft_memset(mem_ft5, -1, 10);
	mem_lb5 = memset(mem_lb5, -1, 10);
	printf("ft_memset: %s\n", mem_ft5);
	printf("   memset: %s\n", mem_lb5);
	if (strncmp(mem_ft5, mem_lb5, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft5);
	free(mem_lb5);
	printf("\n");

	// printf("mem: NULL, c: 'a' size: 1\n");
	// char *mem_ft6 = NULL;
	// char *mem_lb6 = NULL;
	// mem_ft6 = ft_memset(mem_ft6, 'a', 1);
	// mem_lb6 = memset(mem_lb6, 'a', 1);
	// printf("ft_memset: %s\n", mem_ft6);
	// printf("   memset: %s\n", mem_lb6);
	// if (strncmp(mem_ft6, mem_lb6, 10) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// free(mem_ft6);
	// free(mem_lb6);
	// printf("\n");

	// printf("mem: 1, c: 'a' size: 5\n");
	// char *mem_ft7 = (char *)malloc(1 * sizeof(char));
	// char *mem_lb7 = (char *)malloc(1 * sizeof(char));
	// mem_ft7 = ft_memset(mem_ft7, 'a', 5);
	// mem_lb7 = memset(mem_lb7, 'a', 5);
	// printf("ft_memset: %s\n", mem_ft7);
	// printf("   memset: %s\n", mem_lb7);
	// if (strncmp(mem_ft7, mem_lb7, SIZE_MAX) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	//free(mem_ft7);
	//free(mem_lb7);
	// printf("\n");

	if (count == 0)
		printf("ALL OK\n");
	else if (count == 1)
		printf("1 test failed.\n");
	else if (count > 1)
		printf("%d tests failed.\n", count);

	return 0;
}
