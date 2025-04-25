#include "../../libft_git/libft.h"
#include "../test.h"

int memmove_test(void)
{
    int count = 0;

	char *dest_ft = (char *)malloc(10 * sizeof(char));
	char *dest_lb = (char *)malloc(10 * sizeof(char));
	const char *src = "123456789";
	printf("destsize: 10, src: %s, size: 10\n", src);
	strlcpy(dest_ft, "abcdefghi", 10);
	strlcpy(dest_lb, "abcdefghi", 10);
	dest_ft = ft_memmove(dest_ft, src, 10);
	dest_lb = memmove(dest_lb, src, 10);
	printf("ft_memmove: %s\n", dest_ft);
	printf("   memmove: %s\n", dest_lb);
	if (dest_ft == NULL && dest_lb == NULL)
		printf("OK\n");
	else if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	dest_ft = (char *)malloc(10 * sizeof(char));
	dest_lb = (char *)malloc(10 * sizeof(char));
	src = "1234567890";
	printf("destsize: 10, src: %s, size: 10\n", src);
	strlcpy(dest_ft, "abcdefghi", 10);
	strlcpy(dest_lb, "abcdefghi", 10);
	dest_ft = ft_memmove(dest_ft, src, 10);
	dest_lb = memmove(dest_lb, src, 10);
	printf("ft_memmove: %s\n", dest_ft);
	printf("   memmove: %s\n", dest_lb);
	if (dest_ft == NULL && dest_lb == NULL)
		printf("OK\n");
	else if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	dest_ft = (char *)malloc(10 * sizeof(char));
	dest_lb = (char *)malloc(10 * sizeof(char));
	printf("destsize: 10, src: dest + 4, size: 10\n");
	strlcpy(dest_ft, "abcdefghi", 10);
	strlcpy(dest_lb, "abcdefghi", 10);
	char *src_ft = dest_ft + 4;
	char *src_lb = dest_lb + 4;
	dest_ft = ft_memmove(dest_ft, src_ft, 4);
	dest_lb = memmove(dest_lb, src_lb, 4);
	printf("ft_memmove: %s\n", dest_ft);
	printf("   memmove: %s\n", dest_lb);
	if (dest_ft == NULL && dest_lb == NULL)
		printf("OK\n");
	else if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	dest_ft = NULL;
	dest_lb = NULL;
	printf("destsize: NULL, src: NULL, size: 10\n");
	dest_ft = ft_memmove(dest_ft, NULL, 4);
	dest_lb = memmove(dest_lb, NULL, 4);
	printf("ft_memmove: %s\n", dest_ft);
	printf("   memmove: %s\n", dest_lb);
	if (dest_ft == NULL && dest_lb == NULL)
		printf("OK\n");
	else if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	// dest_ft = NULL;
	// dest_lb = NULL;
	// printf("destsize: NULL, src: \"abcde\", size: 10\n");
	// dest_ft = ft_memmove(dest_ft, "abcde", 4);
	// dest_lb = memmove(dest_lb, "abcde", 4);
	// printf("ft_memmove: %s\n", dest_ft);
	// printf("   memmove: %s\n", dest_lb);
	// if (dest_ft == NULL && dest_lb == NULL)
	// 	printf("OK\n");
	// else if (strncmp(dest_ft, dest_lb, 10) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// free(dest_ft);
	// free(dest_lb);
	// printf("\n");

	// dest_ft = (char *)malloc(10 * sizeof(char));
	// dest_lb = (char *)malloc(10 * sizeof(char));
	// src = "1234567890abcdef";
	// printf("destsize: 10, src: %s, size: 11\n", src);
	// strlcpy(dest_ft, "abcdefghi", 10);
	// strlcpy(dest_lb, "abcdefghi", 10);
	// dest_ft = ft_memmove(dest_ft, src, 13);
	// dest_lb = memmove(dest_lb, src, 13);
	// printf("ft_memmove: %s\n", dest_ft);
	// printf("   memmove: %s\n", dest_lb);
	// if (dest_ft == NULL && dest_lb == NULL)
	// 	printf("OK\n");
	// else if (strncmp(dest_ft, dest_lb, 10) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// free(dest_ft);
	// free(dest_lb);
	// printf("\n");

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
