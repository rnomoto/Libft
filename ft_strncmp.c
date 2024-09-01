/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:02:55 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/01 12:51:41 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				count;
	const unsigned char	*s1_cast = (const unsigned char *)s1;
	const unsigned char	*s2_cast = (const unsigned char *)s2;

	count = 0;
	while ((*s1_cast && *s2_cast) && count < n)
	{
		if (*s1_cast != *s2_cast)
			return (*s1_cast - *s2_cast);
		s1_cast++;
		s2_cast++;
		count++;
	}
	if ((*s1_cast == '\0' || *s2_cast == '\0') && (*s1_cast != *s2_cast
			&& count < n))
		return (*s1_cast - *s2_cast);
	return (0);
}

// int main(void)
// {
//     char *s1 = "\200";
//     char *s2 = "\0";
//     size_t i = 1;
//     size_t j = 0;
//     size_t k = 6;

// 	int res1 = ft_strncmp(s1, s2, i);
//     printf("mine s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, i, res1);
// 	int ans1 = strncmp(s1, s2, i);
// 	printf("answ s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, i, ans1);

// 	int res2 = ft_strncmp(s1, s2, j);
//     printf("mine s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, j, res2);
// 	int ans2 = strncmp(s1, s2, j);
// 	printf("answ s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, j, ans2);

// 	int res3 = ft_strncmp(s1, s2, k);
//     printf("mine s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, k, res3);
// 	int ans3 = strncmp(s1, s2, k);
// 	printf("answ s1: %s, s2: %s, num: %zu, return: %d\n", s1, s2, k, ans3);

//     return (0);
// }