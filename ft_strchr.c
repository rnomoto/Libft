/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:30:43 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/27 14:09:48 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	c_cast;

	index = 0;
	c_cast = (char)c;
	while (str[index])
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
