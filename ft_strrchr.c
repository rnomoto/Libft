/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:36:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/01 11:20:19 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	c_cast;
	char	*result;

	result = NULL;
	c_cast = (char)c;
	while (*str)
	{
		if (*str == c_cast)
			result = (char *)str;
		str++;
	}
	if (c_cast == '\0')
		return ((char *)str);
	return (result);
}

// int main(void)
// {
//     char *input = "123456789";
//     char i = 'a';
//     char j = 'b';
//     char k = '\0';

//     printf("input: %c, output: %s\n", i, ft_strrchr(input, i));
//     printf("input: %c, output: %s\n", j, ft_strrchr(input, j));
//     printf("input: %c, output: %s\n", k, ft_strrchr(input, k));

//     return (0);
// }