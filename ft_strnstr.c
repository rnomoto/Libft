/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:26:10 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/07 11:42:05 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	while (*s1 && s2_len <= len)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, s2_len) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *tmp1 = "Hello World!";
//     const char *tmp2 = "";
//     const char *to_find = "";

// 	char *result1 = ft_strnstr(tmp1, tmp1, 20);
//     printf("input: %s, search: %s, output: %s\n", tmp1, tmp1, result1);

// 	char *result2 = ft_strnstr(tmp2, to_find, 7);
//     printf("input: %s, search: %s, output: %s\n", tmp2, to_find, result2);

//     return (0);
// }