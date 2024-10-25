/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:26:10 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/25 14:05:32 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_len;

	if (s1 == NULL && len == 0)
		return NULL;
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

// 	char *result1 = ft_strnstr(((void *)0), tmp1, 0);
// 	char *expected1 = strnstr(((void *)0), tmp1, 0);
//     printf("ft_strnstr: %s\n", result1);
// 	printf("strnstr   : %s\n", expected1);

// 	char *result2 = ft_strnstr(tmp2, to_find, 7);
// 	char *expected2 = strnstr(tmp2, to_find, 7);
//     printf("ft_strnstr: %s\n", result2);
// 	printf("strnstr   : %s\n", expected2);

//     return (0);
// }