/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:48:05 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 05:54:07 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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
	a = ft_isprint('0');
	b = isprint('0');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'a'\n");
	a = ft_isprint('a');
	b = isprint('a');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isprint(' ');
	b = isprint(' ');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\n'\n");
	a = ft_isprint('\n');
	b = isprint('\n');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isprint('\0');
	b = isprint('\0');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isprint('\\x80');
	b = isprint('\\x80');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_isprint(EOF);
	b = isprint(EOF);
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
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
