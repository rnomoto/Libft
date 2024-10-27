#include "../../libft.h"
#include "../test.h"

int strlcat_test(void)
{
	int count = 0;
	size_t a;
	size_t b;

	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 3\n");
	char dest_ft1[20] = "ABC"; 
	char dest_lb1[20] = "ABC";
	a = ft_strlcat(dest_ft1, "abcde", 3);
	b = strlcat(dest_lb1, "abcde", 3);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft1);
	printf("   strlcat: %zu\n", b);
	printf("      dest: %s\n", dest_lb1);
	if (a == b && strcmp(dest_ft1, dest_lb1) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");

	
	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 4\n");
	char dest_ft2[20] = "ABC"; 
	char dest_lb2[20] = "ABC";
	a = ft_strlcat(dest_ft2, "abcde", 4);
	b = strlcat(dest_lb2, "abcde", 4);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft2);
	printf("   strlcat: %zu\n", b);
	printf("      dest: %s\n", dest_lb2);
	if (a == b && strcmp(dest_ft2, dest_lb2) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");
	
	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 5\n");
	char dest_ft3[20] = "ABC"; 
	char dest_lb3[20] = "ABC";
	a = ft_strlcat(dest_ft3, "abcde", 5);
	b = strlcat(dest_lb3, "abcde", 5);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft3);
	printf("   strlcat: %zu\n", b);
	printf("      dest: %s\n", dest_lb3);
	if (a == b && strcmp(dest_ft3, dest_lb3) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");
	
	printf("dest: \"ABC\" src: \"abcde\"\n");
	printf("size: 20\n");
	char dest_ft4[20] = "ABC"; 
	char dest_lb4[20] = "ABC";
	a = ft_strlcat(dest_ft4, "abcde", 20);
	b = strlcat(dest_lb4, "abcde", 20);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft4);
	printf("   strlcat: %zu\n", b);
	printf("      dest: %s\n", dest_lb4);
	if (a == b && strcmp(dest_ft4, dest_lb4) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");
	
	printf("dest: \"ABCDE\" src: \"abc\"\n");
	printf("size: 0\n");
	char dest_ft5[20] = "ABCDE"; 
	char dest_lb5[20] = "ABCDE";
	a = ft_strlcat(dest_ft5, "abc", 0);
	b = strlcat(dest_lb5, "abc", 0);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft5);
	printf("   strlcat: %zu\n", b);
	printf("      dest: %s\n", dest_lb5);
	if (a == b && strcmp(dest_ft5, dest_lb5) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");
	
	printf("dest: \"ABCDE\" src: \"\"\n");
	printf("size: 20\n");
	char dest_ft8[20] = "ABCDE"; 
	char dest_lb8[20] = "ABCDE";
	a = ft_strlcat(dest_ft8, "", 20);
	b = strlcat(dest_lb8, "", 20);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft8);
	printf("   strlcat: %zu\n", b);
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
	// a = ft_strlcat(dest_ft9, "", 1);
	// b = strlcat(dest_lb9, "", 1);
	// printf("ft_strlcat: %zu\n", a);
	// printf("      dest: %s\n", dest_ft9);
	// printf("   strlcat: %zu\n", b);
	// printf("      dest: %s\n", dest_lb9);
	// if ((a == 0 && b == 0) && (dest_ft9 == NULL && dest_lb9 == NULL))
	// 	printf("OK\n");
	// else if (a == b && strcmp(dest_ft9, dest_lb9) == 0)
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");
	// printf("\n");
	
	// printf("dest: \"ABCDE\" src: dest + 2 \n");
	// printf("size: 6\n");
	// char dest_ft10[20] = "ABCDE"; 
	// char dest_lb10[20] = "ABCDE";
	// char *src_ft = dest_ft10 + 2;
	// char *src_lb = dest_lb10 + 2;
	// a = ft_strlcat(dest_ft10, src_ft, 20);
	// b = strlcat(dest_lb10, src_lb, 20);
	// printf("ft_strlcat: %zu\n", a);
	// printf("      dest: %s\n", dest_ft10);
	// printf("   strlcat: %zu\n", b);
	// printf("      dest: %s\n", dest_lb10);
	// if (a == b && strcmp(dest_ft10, dest_lb10) == 0)
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");
	// printf("\n");
	
	printf("dest: NULL src: \"abcde\"\n");
	printf("size: 0\n");
	char *dest_ft11 = NULL; 
	char *dest_lb11 = NULL;
	a = ft_strlcat(dest_ft11, "abcde", 0);
	b = strlcat(dest_lb11, "abcde", 0);
	printf("ft_strlcat: %zu\n", a);
	printf("      dest: %s\n", dest_ft11);
	printf("   strlcat: %zu\n", b);
	printf("      dest: %s\n", dest_lb11);
	if ((a == 5 && b == 5) && (dest_ft11 == NULL && dest_lb11 == NULL))
		printf("OK\n");
	else if (a == b && strcmp(dest_ft11, dest_lb11) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	printf("\n");
	
	if (count == 0)
		printf("ALL OK\n");
	else if (count == 1)
	{
		printf("1 test failed.\n");
		return 1;
	}
	else if (count > 1)
	{
		printf("%d tests failed.\n", count);
		return 1;
	}
	return 0;
}
