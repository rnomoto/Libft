/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:30:43 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/30 11:53:22 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	c_cast;

	index = 0;
	c_cast = (char)c;
	while (str[index] != '\0')
	{
		if (str[index] == c_cast)
		{
			return ((char *)str + index);
		}
		index++;
	}
	if (str[index] == c_cast)
		return ((char *)str + index);
	return (NULL);
}

// int main(void)
// {
//     char *input = "teste";
//     int i = 'e' + 256;
//     char j = '\0';

//     printf("input: %c, output: %s\n", i, ft_strchr(input, i));
//     printf("input: %c, output: %s\n", j, ft_strchr(input, j));

//     return (0);
// }