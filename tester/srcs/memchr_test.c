#include "../../libft_git/libft.h"
#include "../test.h"

int memchr_test(void)
{
    int count = 0;

    printf("str: \"Hello World!\", search: 'o', size: 13\n");
    char *str_ft = (char *)malloc(13 * sizeof(char));
    char *str_lb = (char *)malloc(13 * sizeof(char));
    strlcpy(str_ft, "Hello World!", 13);
    strlcpy(str_lb, str_ft, 13);
    char *ret_ft = ft_memchr(str_ft, 'o', 13);
    char *ret_lb = memchr(str_lb, 'o', 13);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    printf("str: \"Hello World!\", search: 'd', size: 13\n");
    str_ft = (char *)malloc(13 * sizeof(char));
    str_lb = (char *)malloc(13 * sizeof(char));
    strlcpy(str_ft, "Hello World!", 13);
    strlcpy(str_lb, str_ft, 13);
    ret_ft = ft_memchr(str_ft, 'd', 13);
    ret_lb = memchr(str_lb, 'd', 13);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    printf("str: \"Hello World!\", search: 'a', size: 13\n");
    str_ft = (char *)malloc(13 * sizeof(char));
    str_lb = (char *)malloc(13 * sizeof(char));
    strlcpy(str_ft, "Hello World!", 13);
    strlcpy(str_lb, str_ft, 13);
    ret_ft = ft_memchr(str_ft, 'a', 13);
    ret_lb = memchr(str_lb, 'a', 13);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    printf("str: \"Hello World!\", search: 'o', size: 0\n");
    str_ft = (char *)malloc(13 * sizeof(char));
    str_lb = (char *)malloc(13 * sizeof(char));
    strlcpy(str_ft, "Hello World!", 13);
    strlcpy(str_lb, str_ft, 13);
    ret_ft = ft_memchr(str_ft, 'o', 0);
    ret_lb = memchr(str_lb, 'o', 0);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    // printf("str: \"Hello World!\", search: 'd', size: 14\n");
    // str_ft = (char *)malloc(13 * sizeof(char));
    // str_lb = (char *)malloc(13 * sizeof(char));
    // strlcpy(str_ft, "Hello World!", 13);
    // strlcpy(str_lb, str_ft, 13);
    // ret_ft = ft_memchr(str_ft, 'd', 14);
    // ret_lb = memchr(str_lb, 'd', 14);
    // printf("ft_memchr: %s\n", ret_ft);
    // printf("   memchr: %s\n", ret_lb);
    // if (ret_ft == NULL && ret_lb == NULL)
    //     printf("OK\n");
    // else if (strncmp(ret_ft, ret_lb, 13) == 0)
    //     printf("OK\n");
    // else
    //     {
    //         printf("KO\n");
    //         count++;
    //     }
    // free(str_ft);
    // free(str_lb);
    // printf("\n");

    printf("str: NULL, search: 'o', size: 0\n");
    str_ft = NULL;
    str_lb = NULL;
    ret_ft = ft_memchr(str_ft, 'o', 0);
    ret_lb = memchr(str_lb, 'o', 0);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    printf("str: \"Hello World!\", search: -1, size: 13\n");
    str_ft = (char *)malloc(13 * sizeof(char));
    str_lb = (char *)malloc(13 * sizeof(char));
    strlcpy(str_ft, "Hello World!", 13);
    strlcpy(str_lb, str_ft, 13);
    ret_ft = ft_memchr(str_ft, -1, 13);
    ret_lb = memchr(str_lb, -1, 13);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    printf("str: \"Hello World!\", search: 128, size: 13\n");
    str_ft = (char *)malloc(13 * sizeof(char));
    str_lb = (char *)malloc(13 * sizeof(char));
    strlcpy(str_ft, "Hello World!", 13);
    strlcpy(str_lb, str_ft, 13);
    ret_ft = ft_memchr(str_ft, 128, 13);
    ret_lb = memchr(str_lb, 128, 13);
    printf("ft_memchr: %s\n", ret_ft);
    printf("   memchr: %s\n", ret_lb);
    if (ret_ft == NULL && ret_lb == NULL)
        printf("OK\n");
    else if (strncmp(ret_ft, ret_lb, 13) == 0)
        printf("OK\n");
    else
        {
            printf("KO\n");
            count++;
        }
    free(str_ft);
    free(str_lb);
    printf("\n");

    // printf("str: NULL, search: 'o', size: 1\n");
    // str_ft = NULL;
    // str_lb = NULL;
    // ret_ft = ft_memchr(str_ft, 'o', 1);
    // ret_lb = memchr(str_lb, 'o', 1);
    // printf("ft_memchr: %s\n", ret_ft);
    // printf("   memchr: %s\n", ret_lb);
    // if (ret_ft == NULL && ret_lb == NULL)
    //     printf("OK\n");
    // else if (strncmp(ret_ft, ret_lb, 13) == 0)
    //     printf("OK\n");
    // else
    //     {
    //         printf("KO\n");
    //         count++;
    //     }
    // free(str_ft);
    // free(str_lb);
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