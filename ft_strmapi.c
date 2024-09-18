/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:36:17 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/19 00:41:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	index = 0;
	result = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		result[index] = f(index, s[index]);
		index++;
	}
	return (result);
}

char	func(unsigned int n, char c)
{
	char	result;

	(void)n;
	result = c;
	return (result);
}

// int main(void)
// {
// 	char *s = "AAAAAAAAAA";
// 	char (*f)(unsigned int, char);

// 	f = func;
// 	char *result = ft_strmapi(s, f);
// 	printf("%s\n", s);
// 	printf("%s\n", result);

// 	return (0);
// }
