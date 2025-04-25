/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:00:04 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/27 14:42:49 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*str_cast;
	unsigned char	c_cast;

	index = 0;
	str_cast = (unsigned char *)str;
	c_cast = (unsigned char)c;
	while (index < n)
	{
		str_cast[index] = c_cast;
		index++;
	}
	return (str_cast);
}
