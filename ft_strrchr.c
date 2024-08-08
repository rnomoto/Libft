/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:36:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/08 11:59:24 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int word_count(const char *s, int c)
{
    int count = 0;
    while (*s)
    {
        if (*s == c)
            count++;
        s++;
    }
    return count;
}

char *ft_strrchr(const char *s, int c)
{
    int num = word_count(s, c);

    if (num != 0)
    {
        while (*s)
        {
            if (*s == c && num == 1)
                return (char *)s;
            else if (*s == c && num != 1)
                num--;
            s++;
        }
    }
    return NULL;
}

// #include <stdio.h>

// int main(void)
// {
//     char *input = "Hello World!";
//     char i = 'r';
//     char j = 'l';
//     char k = 'a';

//     printf("input: %c, output: %s\n", i, ft_strrchr(input, i));
//     printf("input: %c, output: %s\n", j, ft_strrchr(input, j));
//     printf("input: %c, output: %s\n", k, ft_strrchr(input, k));

//     return 0;
// }