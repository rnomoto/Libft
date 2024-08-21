/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:26:10 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/21 13:20:59 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return ((char *)s1);
	while (s1[i + j] != '\0' && len > 0)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *tmp1 = "Hello World!";
//     const char *tmp2 = "42Tokyo";
//     const char *to_find = "lo";

//     printf("input: %s, search: %s, output: %s\n", tmp1, to_find, ft_strnstr(tmp1, to_find, 10));
	//     printf("input: %s, search: %s, output: %s\n", tmp2, to_find, ft_strnstr(tmp2, to_find, 7));

	//     return (0);
	// }