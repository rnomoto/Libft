/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:49:09 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 13:42:42 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_count(char const *str, char c)
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

size_t	substr_count(char const *str, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	arr_i;
	size_t	str_i;
	size_t i;

	arr_i = 0;
	str_i = 0;
	i = 0;
	result = (char **)ft_calloc(sizeof(char *), str_count(s, c) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (s[str_i] != '\0')
	{
		while (s[str_i] == c)
			str_i++;
		if (s[str_i] == '\0')
			break ;
		result[arr_i] = (char *)ft_calloc(sizeof(char), (substr_count(s + str_i,
						c) + 1));
		if (result[arr_i] == NULL)
		{
			while(i <= arr_i)
			{
				free(result[i]);
				i++;
			}
			free(result);
			return (NULL);
		}
		ft_strlcpy(result[arr_i], s + str_i, substr_count(s + str_i, c) + 1);
		str_i += substr_count(s + str_i, c);
		arr_i++;
	}
	result[arr_i] = NULL;
	return (result);
}

// int main(void)
// {
//     char *str = "xxxxxxxxhello!";
//     char c = 'x';
//     size_t i = 0;

//     char **result = ft_split(str, c);
//     while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     return (0);
// }