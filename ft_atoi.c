/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:40:03 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/25 13:15:14 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
		return (0);
	return (1);
}

int	ft_isoverflow(long num, int next)
{
	long	ov_div;
	long	ov_mod;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	if (num > ov_div)
		return (1);
	else if (num == ov_div && ov_mod < (long)next - '0')
		return (1);
	return (0);
}

int	ft_isunderflow(long num, int next)
{
	long	un_div;
	long	un_mod;

	un_div = LONG_MIN / -10;
	un_mod = LONG_MIN % -10 * -1;
	if (num > un_div)
		return (1);
	else if (num == un_div && un_mod < (long)next - '0')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str) == 0)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str == '+' || *str == '-')
		return (0);
	while ('0' <= *str && *str <= '9')
	{
		if (sign == 1 && ft_isoverflow(result, *str) == 1)
			return ((int)LONG_MAX);
		else if (sign == -1 && ft_isunderflow(result, *str) == 1)
			return ((int)LONG_MIN);
		result = 10 * result + (long)*str - '0';
		str++;
	}
	return ((int)result * sign);
}

/*
int	main(void)
{
	int		sign;
	char	c1[] = "9223372036854775809";
	int		a1;
	int		b1;
	char	c2[] = "-9223372036854775810";
	int		a2;
	int		b2;
	char	c3[] = "-9223372036854775807";
	int		a3;
	int		b3;

	sign = 0;
	printf("test1 argument: \"9223372036854775809\"\n");
	a1 = ft_atoi(c1);
	b1 = atoi("9223372036854775809");
	printf("LONG_MAX: %d\n", (int)LONG_MAX);
	printf("ft_atoi : %d\n", a1);
	printf("atoi    : %d\n", b1);
	if(a1 == b1)
		printf("OK\n");
	else if(a1 != b1)
	{
		printf("KO\n");
		sign = 1;
	}
	printf("\n");
	printf("test2 argument: \"-9223372036854775810\"\n");
	a2 = ft_atoi(c2);
	b2 = atoi("-9223372036854775810");
	printf("LONG_MIN: %d\n", (int)LONG_MIN);
	printf("ft_atoi : %d\n", a2);
	printf("atoi    : %d\n", b2);
	if(a2 == b2)
		printf("OK\n");
	else if(a2 != b2)
	{
		printf("KO\n");
		sign = 1;
	}
	printf("\n");
	printf("test3 argument: \"-9223372036854775807\"\n");
	a3 = ft_atoi(c3);
	b3 = atoi("-9223372036854775807");
	printf("ft_atoi : %d\n", a3);
	printf("atoi    : %d\n", b3);
	if(a3 == b3)
		printf("OK\n");
	else if(a3 != b3)
	{
		printf("KO\n");
		sign = 1;
	}
	printf("\n");
	if(sign == 0)
		printf("All correct!\n");
	else if(sign == 1)
		printf("Some tests failed.\n");
	return (0);
}
*/
