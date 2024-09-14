/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:18:26 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/14 21:53:51 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*tmp;

	index = 0;
	if (s == NULL)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (tmp == NULL)
		return (NULL);
	while (index < len && s[index + start] != '\0')
	{
		tmp[index] = s[index + start];
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}

// int main(void)
// {
//     char *result = ft_substr("", 1, 1);
//     printf("%s\n", result);

//     free(result);
//     return (0);
// }