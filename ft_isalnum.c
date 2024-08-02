/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:29:50 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/02 15:42:57 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if (('0' <= c && c <= '9') || (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')))
        return 1;
    else
        return 0;
}

// #include <stdio.h>

// int main(void)
// {
//     int i = 48;
//     char j = '0';
//     int k = 65;
//     int l = ' ';
//     int result1, result2, result3, result4 = 0;

//     result1 = ft_isalnum(i);
//     printf("input: %d, output: %d\n", i, result1);
//     result2 = ft_isalnum(j);
//     printf("input: %c, output: %d\n", j, result2);
//     result3 = ft_isalnum(k);
//     printf("input: %d, output: %d\n", k, result3);
//     result4 = ft_isalnum(l);
//     printf("input: %c, output: %d\n", l, result4);

//     return 0;
// }