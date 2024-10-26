/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:36:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 12:15:02 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	c_cast;
	char	*result;

	result = NULL;
	c_cast = (char)c;
	while (*str)
	{
		if (*str == c_cast)
			result = (char *)str;
		str++;
	}
	if (c_cast == '\0')
		return ((char *)str);
	return (result);
}

/*
int main(void)
{
	int count = 0;
	char *a;
	char *b;
	
	printf("arg1: \"Hello World!\" arg2: 'o'\n");
	a = ft_strrchr("Hello World!", 'o');
	b = strrchr("Hello World!", 'o');
	printf("ft_strrchr: %s\n", a);
	printf("strrchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: '1'\n");
	a = ft_strrchr("Hello World!", '1');
	b = strrchr("Hello World!", '1');
	printf("ft_strrchr: %s\n", a);
	printf("strrchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: '\\0'\n");
	a = ft_strrchr("Hello World!", '\0');
	b = strrchr("Hello World!", '\0');
	printf("ft_strrchr: %s\n", a);
	printf("strrchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"\" arg2: '1'\n");
	a = ft_strrchr("", '1');
	b = strrchr("", '1');
	printf("ft_strrchr: %s\n", a);
	printf("strrchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello\\nWorld!\" arg2: '\\n'\n");
	a = ft_strrchr("Hello\nWorld!", '\n');
	b = strrchr("Hello\nWorld!", '\n');
	printf("ft_strrchr: %s\n", a);
	printf("strrchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	// printf("arg1: NULL arg2: '1'\n");
	// a = ft_strchr(NULL, '1');
	// b = strchr(NULL, '1');
	// printf("ft_strchr: %s\n", a);
	// printf("strchr   : %s\n", b);
	// if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
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