/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:12:31 by rnomoto           #+#    #+#             */
/*   Updated: 2024/09/09 13:59:59 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src)
{
	size_t				index;
	unsigned char		*dest_cast;
	const unsigned char	*src_cast = (const unsigned char *)src;

    index = ft_strlen(src);
	dest_cast = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while (index >= 0)
	{
		dest_cast[index] = src_cast[index];
		index--;
	}
	return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t len)
{
    if (dest < src && dest + len > src)
        ft_memrcpy(dest, src);
    else
        ft_memcpy(dest, src, len);     
    return dest;
}

int main(void)
{
    char *dest = "42Tokyo";
    const char *src = dest + 3;

    char *result = ft_memmove(dest, src, 2);
    printf("dest: %s, src: %s, result: %s\n", dest, src, result);
    
    return 0;
}