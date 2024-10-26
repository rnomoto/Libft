/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:04:35 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 06:21:14 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c += 'a' - 'A';
	}
	return (c);
}

/*
int main(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: 'A'\n");
	a = ft_tolower('A');
	b = tolower('A');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'a'\n");
	a = ft_tolower('a');
	b = tolower('a');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_tolower('0');
	b = tolower('0');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_tolower(' ');
	b = tolower(' ');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_tolower('\\');
	b = tolower('\\');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_tolower('\0');
	b = tolower('\0');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_tolower('\x80');
	b = tolower('\x80');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_tolower(EOF);
	b = tolower(EOF);
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");


	if (count == 0)
		printf("ALL OK\n");
	else if (count == 1)
		printf("1 test failed.\n");
	else if (count > 1)
		printf("%d tests failed.\n", count);

	return 0;
}
*/