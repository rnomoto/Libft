/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:02:55 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 11:54:37 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_cast = (const unsigned char *)s1;
	const unsigned char	*s2_cast = (const unsigned char *)s2;

	i = 0;
	if (n == 0)
		return 0;
	while ((s1_cast[i] && s2_cast[i]) && i < n)
	{
		if (s1_cast[i] != s2_cast[i])
			return (s1_cast[i] - s2_cast[i]);
		i++;
	}
	if ((s1_cast[i] == '\0' || s2_cast[i] == '\0') && i < n)
		return (s1_cast[i] - s2_cast[i]);
	return (0);
}

/*
int main(void)
{
	int count = 0;
	int a;
	int b;
	
	printf("arg1: \"Hello World!\" arg2: \"Hello World!\"\n");
	printf("arg3: 20\n");
	a = ft_strncmp("Hello World!", "Hello World!", 20);
	b = strncmp("Hello World!", "Hello World!", 20);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"Hello World!\"\n");
	printf("arg3: 12\n");
	a = ft_strncmp("Hello World!", "Hello World!", 12);
	b = strncmp("Hello World!", "Hello World!", 12);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"Hello World!\"\n");
	printf("arg3: 5\n");
	a = ft_strncmp("Hello World!", "Hello World!", 5);
	b = strncmp("Hello World!", "Hello World!", 5);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"Hello WoRld!\"\n");
	printf("arg3: 20\n");
	a = ft_strncmp("Hello World!", "Hello WoRld!", 20);
	b = strncmp("Hello World!", "Hello WoRld!", 20);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"Hello WoRld!\"\n");
	printf("arg3: 5\n");
	a = ft_strncmp("Hello World!", "Hello WoRld!", 5);
	b = strncmp("Hello World!", "Hello WoRld!", 5);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"Hello WoRld!\"\n");
	printf("arg3: 0\n");
	a = ft_strncmp("Hello World!", "Hello WoRld!", 0);
	b = strncmp("Hello World!", "Hello WoRld!", 0);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello\\0World!\" arg2: \"Hello\\0WoRld!\"\n");
	printf("arg3: 20\n");
	a = ft_strncmp("Hello\0World!", "Hello WoRld!", 20);
	b = strncmp("Hello\0World!", "Hello WoRld!", 20);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \" Hello World!\"\n");
	printf("arg3: 20\n");
	a = ft_strncmp("Hello World!", " Hello World!", 20);
	b = strncmp("Hello World!", " Hello World!", 20);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"\\x7F\" arg2: \"\\x80\"\n");
	printf("arg3: 1\n");
	a = ft_strncmp("\x7F", "\x80", 1);
	b = strncmp("\x7F", "\x80", 1);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"\\200\" arg2: \"\\0\"\n");
	printf("arg3: 1\n");
	a = ft_strncmp("\200", "\0", 1);
	b = strncmp("\200", "\0", 1);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: NULL arg2: \"Hello World!\"\n");
	printf("arg3: 0\n");
	a = ft_strncmp(NULL, "Hello World!", 0);
	b = strncmp(NULL, "Hello World!", 0);
	printf("ft_strncmp: %d\n", a);
	printf("strncmp   : %d\n", b);
	if (a == b || (a > 0 && b > 0) || (a < 0 && b < 0))
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
