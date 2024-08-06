/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:04:35 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/06 17:07:10 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c += 'a' - 'A';
	}
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
//     int i = 65;
//     char j = 'A';
//     int k = 97;
//     int l = '0';

//     printf("input: %d, output: %d\n", i, ft_tolower(i));
//     printf("input: '%c', output: %c\n", j, ft_tolower(j));
//     printf("input: %d, output: %d\n", k, ft_tolower(k));
//     printf("input: '%c', output: %c\n", l, ft_tolower(l));

//     return (0);
// }