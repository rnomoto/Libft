/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:18:26 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 22:36:16 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*tmp;

	index = 0;
	if (s == NULL || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	tmp = (char *)ft_calloc(sizeof(char), len + 1);
	if (tmp == NULL)
		return (NULL);
	while (index < len && s[start + index] != '\0')
	{
		tmp[index] = s[start + index];
		index++;
	}
	return (tmp);
}

// int main(void)
// {
//     char *result = ft_substr("", 1, 1);
//     printf("%s\n", result);

//     free(result);
//     return (0);
// }