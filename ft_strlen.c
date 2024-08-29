/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:58:36 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/29 19:52:05 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

// int main(void)
// {
// 	const char *s1 = "abcde";
// 	const char *s2 = "Hello World!";
// 	const char *s3 = NULL;
// 	printf("input: %s, output: %zu\n", s1, ft_strlen(s1));
// 	printf("input: %s, output: %zu\n", s2, ft_strlen(s2));
// 	printf("input: %s, output: %zu\n", s3, ft_strlen(s3));
// }