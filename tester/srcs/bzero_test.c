#include "../../libft_git/libft.h"
#include "../test.h"

int bzero_test(void)
{
	int count = 0;
	
	printf("mem: 10, size: 10\n");
	char *mem_ft1 = (char *)malloc(10 * sizeof(char));
	char *mem_lb1 = (char *)malloc(10 * sizeof(char));
	ft_bzero(mem_ft1, 10);
	bzero(mem_lb1, 10);
	if (strncmp(mem_ft1, mem_lb1, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft1);
	free(mem_lb1);
	printf("\n");

	printf("mem: 10, size: 1\n");
	char *mem_ft2 = (char *)malloc(10 * sizeof(char));
	char *mem_lb2 = (char *)malloc(10 * sizeof(char));
	strlcpy(mem_ft2, "123456789", 10);
	strlcpy(mem_lb2, "123456789", 10);
	ft_bzero(mem_ft2, 1);
	bzero(mem_lb2, 1);
	if (strncmp(mem_ft2, mem_lb2, 10) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	free(mem_ft2);
	free(mem_lb2);
	printf("\n");

	// printf("mem: NULL, size: 1\n");
	// char *mem_ft3 = NULL;
	// char *mem_lb3 = NULL;
	// ft_bzero(mem_ft3, 1);
	// bzero(mem_lb3, 1);
	// if (strncmp(mem_ft3, mem_lb3, 10) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// printf("\n");

	// printf("mem: 1, size: 5\n");
	// char *mem_ft4 = (char *)malloc(1 * sizeof(char));
	// char *mem_lb4 = (char *)malloc(1 * sizeof(char));
	// ft_bzero(mem_ft4, 5);
	// bzero(mem_lb4, 5);
	// if (strncmp(mem_ft4, mem_lb4, 5) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
	// free(mem_ft2);
	// free(mem_lb2);
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
