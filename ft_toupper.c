/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:32:32 by ryosuke           #+#    #+#             */
/*   Updated: 2024/08/06 17:03:53 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z')
    {
        c -= 'a' - 'A';
    }
    return c;
}

// #include <stdio.h>

// int main(void)
// {
//     int i = 97;
//     char j = 'a';
//     int k = 65;
//     int l = '0';

//     printf("input: %d, output: %d\n", i, ft_toupper(i));
//     printf("input: '%c', output: %c\n", j, ft_toupper(j));
//     printf("input: %d, output: %d\n", k, ft_toupper(k));
//     printf("input: '%c', output: %c\n", l, ft_toupper(l));

//     return 0;
// }