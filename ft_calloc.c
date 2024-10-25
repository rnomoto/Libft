/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:59:09 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/25 13:12:31 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	index;
	char	*tmp;

	if ((size != 0 && count != 0) && SIZE_MAX / count < size)
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
//     char *result = ft_calloc(0, 2);
// 	char *expected = calloc(0, 2);
//     printf("ft_calloc: %s\n", result);
// 	printf("calloc   : %s\n", expected);

//     free(result);
//     return (0);
// }