/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:36:17 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/19 00:28:34 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t index = 0;
	char *result = (char *)ft_calloc(sizeof(char), ft_strlen(s));
	if (result == NULL)
		return NULL;

	while (s[index] != '\0')
	{
		result[index] = f;
		index++;
	}
	return result;
}

char func(unsigned int n, char c)
{
	char result;

	(void)n;
	result = c;

	return result;
}

int main(void)
{
	char *result;
	char *s = "AAAAAAAAAA";
	unsigned int n = 0;
	char c = 'B';
	char (*f)(unsigned int, char);

	f = func;
	result = ft_strmapi(s, (*f)(n, c));

	return 0;
}
