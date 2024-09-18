/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 02:54:06 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/19 03:24:27 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}

// int main(void)
// {
//     char s[] = "Hello World!";
//     int fd = 1;
//     ft_putendl_fd(s, fd);

//     return 0;
// }