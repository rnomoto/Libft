/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:30:43 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/21 13:08:29 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *input = "Hello World!";
//     char i = 'r';
//     char j = 'a';

//     printf("input: %c, output: %s\n", i, ft_strchr(input, i));
//     printf("input: %c, output: %s\n", j, ft_strchr(input, j));

//     return (0);
// }