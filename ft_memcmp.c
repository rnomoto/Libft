/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:58:22 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 17:33:45 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;

	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_cast != *s2_cast)
			return (*s1_cast - *s2_cast);
		s1_cast++;
		s2_cast++;
		n--;
	}
	return (0);
}

// int main(void)
// {
//     char *s1 = "t\200";
//     char *s2 = "t\0";

//     int result = ft_memcmp(s1, s2, 5);
//     printf("%d\n", result);

//     return (0);
// }
