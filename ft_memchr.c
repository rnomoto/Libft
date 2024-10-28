/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:12:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 07:57:26 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	unsigned char	c_cast;

	s_cast = (unsigned char *)s;
	c_cast = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*s_cast == c_cast)
			return (s_cast);
		s_cast++;
		n--;
	}
	if (*s_cast == c_cast && c_cast == '\0')
		return (s_cast);
	return (NULL);
}
