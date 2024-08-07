/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:30:43 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/07 16:48:56 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char* s, int c)
{
    char *result = NULL;
    while (*s)
    {
        if (*s == c)
        {
            while (*s)
            {
                *result = *s;
                result++;
                s++;
            }
            *result = '\0';
            return result;
        }
        s++;
    }
    return NULL;
}

#include <stdio.h>

int main(void)
{
    char *input = "Hello World!";
    char i = 'r';
    char j = 'a';

    printf("input: %c, output: %s\n", i, ft_strchr(input, i));
    printf("input: %c, output: %s\n", j, ft_strchr(input, i));

    return 0;
}