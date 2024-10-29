/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:40:03 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 09:55:02 by rnomoto          ###   ########.fr       */
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
