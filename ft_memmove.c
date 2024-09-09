/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:12:31 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/09 12:38:26 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    int count = 0;
    while (len > 0)
    {
        ft_memcpy(dest, src, 1);
        dest++;
        src++;
        len--;
        count++;
    }
    while (count > 0)
    {
        dest--;
        count--;   
    }
    return dest;
}

// int main(void)
// {
//     char *dest = (char *)malloc(10 * sizeof(char));
//     const char *src = "42Tokyo";

//     char *result = ft_memmove(dest, src, 5);
//     printf("dest: %s, src: %s, result: %s\n", dest, src, result);
    
//     return 0;
// }