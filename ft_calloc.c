/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:59:09 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 19:47:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	index;
	char	*tmp;

	if (size != 0 && SIZE_MAX / count < size)
		return (NULL);
	index = 0;
	tmp = (char *)malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	while (index < count * size)
	{
		tmp[index] = 0;
		index++;
	}
	return (tmp);
}

// int main(void)
// {
//     char *result = ft_calloc(4, 20);
//     printf("%s\n", result);

//     free(result);
//     return (0);
// }