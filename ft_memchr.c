/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:12:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 15:28:57 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;

	s_cast = (unsigned char *)s;
	while (*s_cast && n > 0)
	{
		if (*s_cast == c)
			return (s_cast);
		s_cast++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char s[] = "Hello World!";

//     printf("s: %s\n", s);

//     char *result = ft_memchr(s, 'r', 5);
//     printf("result: %s\n", result);

//     return (0);
// }