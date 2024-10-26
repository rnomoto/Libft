/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:57:47 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 06:17:33 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: '0'\n");
	a = ft_isdigit('0');
	b = isdigit('0');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'a'\n");
	a = ft_isdigit('a');
	b = isdigit('a');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_isdigit('A');
	b = isdigit('A');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isdigit(' ');
	b = isdigit(' ');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_isdigit('\\');
	b = isdigit('\\');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isdigit('\0');
	b = isdigit('\0');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isdigit('\x80');
	b = isdigit('\x80');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_isdigit(EOF);
	b = isdigit(EOF);
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
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