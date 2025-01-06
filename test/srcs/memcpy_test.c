#include "../../libft.h"
#include "../test.h"

int memcpy_test(void)
{
	int count = 0;

	printf("destsize: 10, src: \"0123456789\", size: 10\n");
	char *dest_ft = (char *)malloc(10 * sizeof(char));
	char *dest_lb = (char *)malloc(10 * sizeof(char));
	dest_ft = ft_memcpy(dest_ft, "0123456789", 10);
	dest_lb = memcpy(dest_lb,  "0123456789", 10);
	printf("ft_memcpy: %s\n", dest_ft);
	printf("   memcpy: %s\n", dest_lb);
	if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	printf("destsize: 10, src: \"0123456789\", size: 5\n");
	dest_ft = (char *)malloc(10 * sizeof(char));
	dest_lb = (char *)malloc(10 * sizeof(char));
	strlcpy(dest_ft, "abcdefghi", 10);
	strlcpy(dest_lb, "abcdefghi", 10);
	dest_ft = ft_memcpy(dest_ft, "0123456789", 5);
	dest_lb = memcpy(dest_lb,  "0123456789", 5);
	printf("ft_memcpy: %s\n", dest_ft);
	printf("   memcpy: %s\n", dest_lb);
	if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	printf("destsize: 10, src: \"01234\\0ABCD\", size: 10\n");
	dest_ft = (char *)malloc(10 * sizeof(char));
	dest_lb = (char *)malloc(10 * sizeof(char));
	dest_ft = ft_memcpy(dest_ft, "01234\0ABCD", 10);
	dest_lb = memcpy(dest_lb,  "01234\0ABCD", 10);
	printf("ft_memcpy: %s\n", dest_ft);
	printf("   memcpy: %s\n", dest_lb);
	if (strncmp(dest_ft, dest_lb, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(dest_ft);
	free(dest_lb);
	printf("\n");

	// printf("dest: NULL, src: NULL, size: 10\n");
	// dest_ft = NULL;
	// dest_lb = NULL;
	// dest_ft = ft_memcpy(dest_ft, NULL, 10);
	// dest_lb = memcpy(dest_lb, NULL, 10);
	// printf("ft_memcpy: %s\n", dest_ft);
	// printf("   memcpy: %s\n", dest_lb);
	// if (dest_ft == NULL && dest_lb == NULL)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// free(dest_ft);
	// free(dest_lb);
	// printf("\n");

	// printf("destsize: 10 , src: NULL, size: 10\n");
	// dest_ft = (char *)malloc(10 * sizeof(char));
	// dest_lb = (char *)malloc(10 * sizeof(char));
	// dest_ft = ft_memcpy(dest_ft, NULL, 10);
	// dest_lb = memcpy(dest_lb, NULL, 10);
	// printf("ft_memcpy: %s\n", dest_ft);
	// printf("   memcpy: %s\n", dest_lb);
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

	// printf("destsize: 10, src: \"0123456789\", size: 5\n");
	// dest_ft = (char *)malloc(10 * sizeof(char));
	// dest_lb = (char *)malloc(10 * sizeof(char));
	// strlcpy(dest_ft, "abcdefghi", 10);
	// strlcpy(dest_lb, "abcdefghi", 10);
	// char *src_ft = dest_ft + 4;
	// char *src_lb = dest_lb + 4;
	// dest_ft = ft_memcpy(dest_ft, src_ft, 5);
	// dest_lb = memcpy(dest_lb,  src_lb, 5);
	// printf("ft_memcpy: %s\n", dest_ft);
	// printf("   memcpy: %s\n", dest_lb);
	// if (strncmp(dest_ft, dest_lb, 10) == 0)
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
