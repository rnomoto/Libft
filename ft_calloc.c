/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:59:09 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/29 10:17:25 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	index;
	char	*tmp;

	if ((size != 0 && count != 0) && SIZE_MAX / count < size)
		return (NULL);
	else if (size == 0 || count == 0)
		count = 1;
	index = 0;
	tmp = (char *)malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	while (index < count * size)
	{
		tmp[index] = 0;
		index++;
	}
	return ((void*)tmp);
}
