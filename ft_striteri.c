/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:49:55 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/19 02:16:03 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned	index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, s + index);
		index++;
	}
}

// void    func(unsigned int n, char *s)
// {
// 	(void) n;
//     s[0] = 'b';
// }

// int main(void)
// {
// 	char s[] = "AAAAAAAAAA";
// 	void (*f)(unsigned int, char *);

// 	f = func;
//     printf("%s\n", s);
// 	ft_striteri(s, f);
// 	printf("%s\n", s);

// 	return (0);
// }
