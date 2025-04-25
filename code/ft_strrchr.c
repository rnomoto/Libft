/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:36:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 17:25:36 by rnomoto          ###   ########.fr       */
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
