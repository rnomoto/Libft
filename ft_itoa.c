/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:22:58 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/18 23:16:49 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(int n)
{
	size_t	result;

	result = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

void	put_reverse(char *memory, int n, size_t sign, size_t digit)
{
	size_t	i;

	i = digit - 1;
	while (i > 0)
	{
		memory[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (i == 0 && sign == 1)
		memory[i] = '-';
	else if (i == 0 && sign == 0)
		memory[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	size_t	sign;
	size_t	digit;
	char	*result;

	sign = 0;
	digit = 0;
	if (n == -2147483648)
	{
		result = ft_strdup("-2147483648");
		return (result);
	}
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	digit = sign + count(n);
	result = (char *)ft_calloc(sizeof(char), digit + 1);
	if (result == NULL)
		return (NULL);
	put_reverse(result, n, sign, digit);
	return (result);
}

// int main(void)
// {
//     int n = -2147483648;

//     char *result = ft_itoa(n);
//     printf("input : %d\n", n);
//     printf("output: %s\n", result);

//     free(result);
//     return (0);
// }