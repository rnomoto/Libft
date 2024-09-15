/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:47:24 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/15 10:01:30 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*result;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)ft_calloc(sizeof(char), len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcat(result, s1, len + 1);
	ft_strlcat(result, s2, len + 1);
	return (result);
}

// int main(void)
// {
//     char *s1 = "1234567890";
//     char *s2 = "ABCDEFGHJK";

//     char *result = ft_strjoin(s1, s2);
//     printf("%s\n", result);

//     free(result);
// 	return (0);
// }