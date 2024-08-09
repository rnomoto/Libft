/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:02:55 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/09 09:42:21 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((s1[index] != '\0' && s2[index] != '\0') && index < n)
	{
		if (s1[index] != s2[index])
			return (1);
		index++;
	}
	if ((s1[index] == '\0' || s2[index] == '\0') && s1[index] != s2[index])
		return (1);
	return (0);
}

// int main(void)
// {
//     char *s1 = "Hello";
//     char *s2 = "Herlo";
//     size_t i = 4;
//     size_t j = 2;
//     size_t k = 6;

//     printf("s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, i,ft_strncmp(s1, s2, i));
//     printf("s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, j,ft_strncmp(s1, s2, j));
//     printf("s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, k,ft_strncmp(s1, s2, k));

//     return (0);
// }