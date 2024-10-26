/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:29:50 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 06:17:13 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || (('A' <= c && c <= 'Z') || ('a' <= c
				&& c <= 'z')))
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
	
	printf("argument: 'a'\n");
	a = ft_isalnum('a');
	b = isalnum('a');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_isalnum('A');
	b = isalnum('A');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_isalnum('0');
	b = isalnum('0');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isalnum(' ');
	b = isalnum(' ');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_isalnum('\\');
	b = isalnum('\\');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isalnum('\0');
	b = isalnum('\0');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isalnum('\x80');
	b = isalnum('\x80');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

    printf("argument: EOF\n");
	a = ft_isalnum(EOF);
	b = isalnum(EOF);
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
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