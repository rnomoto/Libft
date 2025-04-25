#include "../../libft_git/libft.h"
#include "../test.h"

int calloc_test(void)
{
    int count = 0;

    printf("count: 10, sizeof: char\n");
    char *mem_ft = ft_calloc(10, sizeof(char));
    char *mem_lb = calloc(10, sizeof(char));
    printf("ft_calloc: %s\n", mem_ft);
    printf("   calloc: %s\n", mem_lb);
    if (mem_ft == NULL && mem_lb == NULL)
        printf("OK\n");
    else if (strncmp(mem_ft, mem_lb, 10) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(mem_ft);
    free(mem_lb);
    printf("\n");

    printf("count: 0, sizeof: char\n");
    mem_ft = ft_calloc(0, sizeof(char));
    mem_lb = calloc(0, sizeof(char));
    printf("ft_calloc: %s\n", mem_ft);
    printf("   calloc: %s\n", mem_lb);
    if (mem_ft == NULL && mem_lb == NULL)
        printf("OK\n");
    else if (strncmp(mem_ft, mem_lb, 10) == 0 || strcmp(mem_ft, mem_lb) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(mem_ft);
    free(mem_lb);
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