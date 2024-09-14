/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:12:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 16:51:51 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;

	c &= 0xff;
	s_cast = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*s_cast == c)
			return (s_cast);
		s_cast++;
		n--;
	}
	if (*s_cast == c && c == '\0')
		return (s_cast);
	return (NULL);
}

// int main(void)
// {
//     char s[] = {0, 1, 2 ,3 ,4 ,5};

//     printf("s: %s\n", s);

//     char *result = ft_memchr(s, 0, 0);
//     printf("result: %s\n", result);

//     return (0);
// }