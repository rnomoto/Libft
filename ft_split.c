/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:49:09 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 17:07:25 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	arr_count(char const *str, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

size_t	arr_len(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str != c && *str)
	{
		count++;
		str++;
	}
	return (count);
}

void	*split_free(char **array, size_t n)
{
	size_t	index;

	index = 0;
	while (index <= n)
	{
		free(array[index]);
		index++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = (char **)ft_calloc(sizeof(char *), arr_count(s, c) + 1);
	if (res == NULL)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (s[j] == '\0')
			break ;
		res[i] = (char *)ft_calloc(sizeof(char), (arr_len(s + j, c) + 1));
		if (res[i] == NULL)
			return (split_free(res, i));
		ft_strlcpy(res[i], s + j, arr_len(s + j, c) + 1);
		j += arr_len(s + j, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
