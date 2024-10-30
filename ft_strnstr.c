/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:26:10 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 17:08:53 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_len;

	if (s1 == NULL && len == 0)
		return (NULL);
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char *)s1);
	while (*s1 && s2_len <= len)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, s2_len) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
