/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:26:10 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/13 08:33:59 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int index = 0;

    while (*s1 && len > 0)
    {
        if (*s1 == s2[index])
        {
            index++;
            if (s2[index] == '\0')
                return *s1;
        }
        else
            index = 0;
        s1++;
        len--;

        return NULL;
    }
}

int main(void)
{
    const char *tmp1 = "Hello World!";
    const char *tmp2 = "42Tokyo";
    const char *to_find = "r";

    printf("input: %s, search: %s, output: %s\n", tmp1, to_find, ft_strnstr(tmp1, to_find, 10));
    printf("input: %s, search: %s, output: %s\n", tmp2, to_find, ft_strnstr(tmp1, to_find, 7));

    return 0;
}