/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:02:55 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/27 14:19:32 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_cast = (const unsigned char *)s1;
	const unsigned char	*s2_cast = (const unsigned char *)s2;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1_cast[i] && s2_cast[i]) && i < n)
	{
		if (s1_cast[i] != s2_cast[i])
			return (s1_cast[i] - s2_cast[i]);
		i++;
	}
	if ((s1_cast[i] == '\0' || s2_cast[i] == '\0') && i < n)
		return (s1_cast[i] - s2_cast[i]);
	return (0);
}
