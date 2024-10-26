/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:15:15 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 06:17:20 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z' ) || ('A' <= c && c <= 'Z'))
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
	a = ft_isalpha('a');
	b = isalpha('a');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_isalpha('A');
	b = isalpha('A');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_isalpha('0');
	b = isalpha('0');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isalpha(' ');
	b = isalpha(' ');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_isalpha('\\');
	b = isalpha('\\');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isalpha('\0');
	b = isalpha('\0');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isalpha('\x80');
	b = isalpha('\x80');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: E0F\n");
	a = ft_isalpha(EOF);
	b = isalpha(EOF);
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
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
