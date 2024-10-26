/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:32:32 by ryosuke           #+#    #+#             */
/*   Updated: 2024/10/26 06:16:58 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		c -= 'a' - 'A';
	}
	return (c);
}

/*
int main(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: 'a'\n");
	a = ft_toupper('a');
	b = toupper('a');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_toupper('A');
	b = toupper('A');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_toupper('0');
	b = toupper('0');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_toupper(' ');
	b = toupper(' ');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_toupper('\\');
	b = toupper('\\');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_toupper('\0');
	b = toupper('\0');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_toupper('\x80');
	b = toupper('\x80');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_toupper(EOF);
	b = toupper(EOF);
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
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