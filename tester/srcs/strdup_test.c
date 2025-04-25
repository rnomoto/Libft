#include "../../libft_git/libft.h"
#include "../test.h"

int strdup_test(void)
{
    int count = 0;

    char *tmp = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp, "Hello World!", 13);
    printf("arg: \"%s\"\n", tmp);
    char *ret_ft = ft_strdup(tmp);
    char *ret_lb = strdup(tmp);
    printf("ft_strdup: %s\n", ret_ft);
    printf("   strdup: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(ret_ft);
    free(ret_lb);
    printf("\n");

    tmp = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp, "", 13);
    printf("arg: \"%s\"\n", tmp);
    ret_ft = ft_strdup(tmp);
    ret_lb = strdup(tmp);
    printf("ft_strdup: %s\n", ret_ft);
    printf("   strdup: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(ret_ft);
    free(ret_lb);
    printf("\n");

    printf("arg: \"Hello\\0World!\"\n");
    ret_ft = ft_strdup("Hello\0World!");
    ret_lb = strdup("Hello\0World!");
    printf("ft_strdup: %s\n", ret_ft);
    printf("   strdup: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(ret_ft);
    free(ret_lb);
    printf("\n");

    // printf("arg: NULL\n");
    // ret_ft = ft_strdup(NULL);
    // ret_lb = strdup(NULL);
    // printf("ft_strdup: %s\n", ret_ft);
    // printf("   strdup: %s\n", ret_lb);
    // if (ret_ft == NULL && ret_lb == NULL)
    //     printf("OK\n");
    // else if (strncmp(ret_ft, ret_lb, 13) == 0)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(tmp);
    // free(ret_ft);
    // free(ret_lb);
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