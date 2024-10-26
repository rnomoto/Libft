/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:12:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 21:34:21 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	
	s_cast = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*s_cast == c)
			return (s_cast);
		s_cast++;
		n--;
	}
	if (*s_cast == c && c == '\0')
		return (s_cast);
	return (NULL);
}

/*
int main(void)
{
	int count = 0;
	
	char *mem_ft = (char *)malloc(10 * sizeof(char));
	char *mem_lb = (char *)malloc(10 * sizeof(char));
	char *src = "123456789";
	printf("str: %s, search: '3', size: 10\n", src);
	strlcpy(mem_ft, src, 10);
	strlcpy(mem_lb, src, 10);
	mem_ft = ft_memchr(mem_ft, '3', 10);
	mem_lb = memchr(mem_lb, '3', 10);
	printf("ft_memchr: %s\n", mem_ft);
	printf("   memchr: %s\n", mem_lb);
	if (strncmp(mem_ft, mem_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft);
	free(mem_lb);
	printf("\n");

	

    if (count == 0)
		printf("ALL OK\n");
	else if (count == 1)
		printf("1 test failed.\n");
	else if (count > 1)
		printf("%d tests failed.\n", count);

	return 0;

    return (0);
}
*/