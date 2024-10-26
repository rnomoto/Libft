/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:29:58 by rnomoto           #+#    #+#             */
/*   Updated: 2024/10/26 14:25:26 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	result;

	i = 0;
	result = 0;
	result = ft_strlen(src);
	if (size == 0)
		return (result);
	while (src[i] != '\0' && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (result);
}

/*
int main(void)
{
	int count = 0;
	size_t a;
	size_t b;

	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 3\n");
	char dest_ft1[] = "ABC"; 
	char dest_lb1[] = "ABC";
	a = ft_strlcpy(dest_ft1, "abcde", 3);
	b = strlcpy(dest_lb1, "abcde", 3);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft1);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb1);
	if (a == b && strcmp(dest_ft1, dest_lb1) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 4\n");
	char dest_ft2[] = "ABC"; 
	char dest_lb2[] = "ABC";
	a = ft_strlcpy(dest_ft2, "abcde", 4);
	b = strlcpy(dest_lb2, "abcde", 4);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft2);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb2);
	if (a == b && strcmp(dest_ft2, dest_lb2) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 2\n");
	char dest_ft3[] = "ABC"; 
	char dest_lb3[] = "ABC";
	a = ft_strlcpy(dest_ft3, "abcde", 2);
	b = strlcpy(dest_lb3, "abcde", 2);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft3);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb3);
	if (a == b && strcmp(dest_ft3, dest_lb3) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 0\n");
	char dest_ft4[] = "ABC"; 
	char dest_lb4[] = "ABC";
	a = ft_strlcpy(dest_ft4, "abcde", 0);
	b = strlcpy(dest_lb4, "abcde", 0);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft4);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb4);
	if (a == b && strcmp(dest_ft4, dest_lb4) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	printf("dest: \"ABCDE\" src: \"abc\"\n");
	printf("size: 6\n");
	char dest_ft5[] = "ABCDE"; 
	char dest_lb5[] = "ABCDE";
	a = ft_strlcpy(dest_ft5, "abc", 6);
	b = strlcpy(dest_lb5, "abc", 6);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft5);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb5);
	if (a == b && strcmp(dest_ft5, dest_lb5) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	printf("dest: \"ABCDE\" src: \"abcde\"\n");
	printf("size: 6\n");
	char dest_ft6[] = "ABCDE"; 
	char dest_lb6[] = "ABCDE";
	a = ft_strlcpy(dest_ft6, "abcde", 6);
	b = strlcpy(dest_lb6, "abcde", 6);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft6);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb6);
	if (a == b && strcmp(dest_ft6, dest_lb6) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");
	
	printf("dest: \"ABCDE\" src: \"abcde\"\n");
	printf("size: 1\n");
	char dest_ft7[] = "ABCDE"; 
	char dest_lb7[] = "ABCDE";
	a = ft_strlcpy(dest_ft7, "abcde", 1);
	b = strlcpy(dest_lb7, "abcde", 1);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft7);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb7);
	if (a == b && strcmp(dest_ft7, dest_lb7) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	printf("dest: \"ABCDE\" src: \"\"\n");
	printf("size: 6\n");
	char dest_ft8[] = "ABCDE"; 
	char dest_lb8[] = "ABCDE";
	a = ft_strlcpy(dest_ft8, "", 6);
	b = strlcpy(dest_lb8, "", 6);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft8);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb8);
	if (a == b && strcmp(dest_ft8, dest_lb8) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	// printf("dest: NULL src: \"abcde\"\n");
	// printf("size: 1\n");
	// char *dest_ft9 = NULL; 
	// char *dest_lb9 = NULL;
	// a = ft_strlcpy(dest_ft9, "", 1);
	// b = strlcpy(dest_lb9, "", 1);
	// printf("ft_strlcpy: %zu\n", a);
	// printf("      dest: %s\n", dest_ft9);
	// printf("   strlcpy: %zu\n", b);
	// printf("      dest: %s\n", dest_lb9);
	// if ((a == 0 && b == 0) && (dest_ft9 == NULL && dest_lb9 == NULL))
	// 	printf("OK\n");
	// else if (a == b && strcmp(dest_ft9, dest_lb9) == 0)
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");
	// printf("\n");

	// printf("dest: "ABCDE" src: dest + 2 \n");
	// printf("size: 6\n");
	// char *dest_ft10 = "ABCDE"; 
	// char *dest_lb10 = "ABCDE";
	// char *src_ft = dest_ft10 + 2;
	// char *src_lb = dest_lb10 + 2;
	// a = ft_strlcpy(dest_ft10, src, 6);
	// b = strlcpy(dest_lb10, src, 6);
	// printf("ft_strlcpy: %zu\n", a);
	// printf("      dest: %s\n", dest_ft10);
	// printf("   strlcpy: %zu\n", b);
	// printf("      dest: %s\n", dest_lb10);
	// if ((a == 0 && b == 0) && (dest_ft10 == NULL && dest_lb10 == NULL))
	// 	printf("OK\n");
	// else if (a == b && strcmp(dest_ft10, dest_lb10) == 0)
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");
	// printf("\n");

	printf("dest: NULL src: \"abcde\"\n");
	printf("size: 0\n");
	char *dest_ft11 = NULL; 
	char *dest_lb11 = NULL;
	a = ft_strlcpy(dest_ft11, "", 0);
	b = strlcpy(dest_lb11, "", 0);
	printf("ft_strlcpy: %zu\n", a);
	printf("      dest: %s\n", dest_ft11);
	printf("   strlcpy: %zu\n", b);
	printf("      dest: %s\n", dest_lb11);
	if ((a == 0 && b == 0) && (dest_ft11 == NULL && dest_lb11 == NULL))
		printf("OK\n");
	else if (a == b && strcmp(dest_ft11, dest_lb11) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	if (count == 0)
		printf("ALL OK\n");
	else if (count == 1)
		printf("1 test failed.\n");
	else if (count > 1)
		printf("%d tests failed.\n", count);

	return 0;
}
*/
