/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:12:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/25 14:30:23 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	int count = 0;

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
		count++;
	}
	printf("count: %d\n", count);
	if (*s_cast == c && c == '\0')
		return (s_cast);
	return (NULL);
}

// int main(void)
// {
//     char *s = ":(){ :|: & };:";

//     printf("s: %s\n", s);

//     char *result = ft_memchr(s, '\xde', 15);
// 	char *expected = memchr(s, '\xde', 15);
//     printf("ft_memchr: %s\n", result);
// 	printf("memchr   : %s\n", expected);

//     return (0);
// }