/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:32:58 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 12:20:30 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	char_judge(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s == set[i])
			return (0);
		i++;
	}
	return (1);
}

size_t	substrlen(char const *str, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	count;

	i = 0;
	len = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (char_judge(str[i], set) == 1)
			len++;
		else if (char_judge(str[i + 1], set) == 1 && str[i + 1] != '\0')
		{
			len += count + 1;
			count = 0;
		}
		else
			count++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char	*s2;

	len = 0;
	i = 0;
	start = 0;
	while (char_judge(s1[i], set) == 0)
	{
		i++;
		start++;
	}
	len = substrlen(s1 + start, set);
	s2 = (char *)ft_calloc(sizeof(char), (len + 1));
	if (s2 == NULL)
		return (NULL);
	ft_strlcat(s2, s1 + start, len + 1);
	return (s2);
}
