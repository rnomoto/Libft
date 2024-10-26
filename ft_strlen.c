/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:58:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 11:08:59 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

/*
int main(void)
{
	int count = 0;
	size_t a;
	size_t b;
	
	printf("argument: \"\"\n");
	a = ft_strlen("");
	b = strlen("");
	printf("ft_strlen: %zu\n", a);
	printf("strlen   : %zu\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: \"Hello World!\"\n");
	a = ft_strlen("Hello World!");
	b = strlen("Hello World!");
	printf("ft_strlen: %zu\n", a);
	printf("strlen   : %zu\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: \"Hello\\nWorld!\"\n");
	a = ft_strlen("Hello\nWorld!");
	b = strlen("Hello\nWorld!");
	printf("ft_strlen: %zu\n", a);
	printf("strlen   : %zu\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: \"Hello\\0World!\"\n");
	a = ft_strlen("Hello\0World!");
	b = strlen("Hello\0World!");
	printf("ft_strlen: %zu\n", a);
	printf("strlen   : %zu\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	// printf("argument: NULL\n");
	// a = ft_strlen(NULL);
	// printf("ft_strlen: %zu\n", a);
	// b = strlen(NULL);
	// printf("strlen   : %zu\n", b);
	// if (a == b)
	// 	printf("OK\n");
	// else if (a != b)
	// 	printf("KO\n");
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
