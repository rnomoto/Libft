#include "../../libft_git/libft.h"
#include "../test.h"

int memcmp_test(void)
{
    int count = 0;

    char *tmp1 = (char *)malloc(13 * sizeof(char));
    char *tmp2 = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp1, "Hello World!", 13);
    strlcpy(tmp2, "Hello World!", 13);
    printf("s1: %s, s2: %s, size: 13\n", tmp1, tmp2);
    int ft = ft_memcmp(tmp1, tmp2, 13);
    int lb = memcmp(tmp1, tmp2, 13);
    printf("ft_memcmp: %d\n", ft);
    printf("   memcmp: %d\n", lb);
    if (ft == lb)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp1);
    free(tmp2);
    printf("\n");

    tmp1 = (char *)malloc(13 * sizeof(char));
    tmp2 = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp1, "Hello World!", 13);
    strlcpy(tmp2, "Hello WoRld!", 13);
    printf("s1: %s, s2: %s, size: 13\n", tmp1, tmp2);
    ft = ft_memcmp(tmp1, tmp2, 13);
    lb = memcmp(tmp1, tmp2, 13);
    printf("ft_memcmp: %d\n", ft);
    printf("   memcmp: %d\n", lb);
    if (ft == lb)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp1);
    free(tmp2);
    printf("\n");

    tmp1 = (char *)malloc(13 * sizeof(char));
    tmp2 = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp1, "Hello World!", 13);
    strlcpy(tmp2, "Hello WoRld!", 13);
    printf("s1: %s, s2: %s, size: 5\n", tmp1, tmp2);
    ft = ft_memcmp(tmp1, tmp2, 5);
    lb = memcmp(tmp1, tmp2, 5);
    printf("ft_memcmp: %d\n", ft);
    printf("   memcmp: %d\n", lb);
    if (ft == lb)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp1);
    free(tmp2);
    printf("\n");

    // tmp1 = (char *)malloc(13 * sizeof(char));
    // tmp2 = (char *)malloc(13 * sizeof(char));
    // strlcpy(tmp1, "Hello World!", 13);
    // strlcpy(tmp2, "Hello World!", 13);
    // printf("s1: %s, s2: %s, size: 14\n", tmp1, tmp2);
    // ft = ft_memcmp(tmp1, tmp2, 14);
    // lb = memcmp(tmp1, tmp2, 14);
    // printf("ft_memcmp: %d\n", ft);
    // printf("   memcmp: %d\n", lb);
    // if (ft == lb)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(tmp1);
    // free(tmp2);
    // printf("\n");

    tmp1 = (char *)malloc(1 * sizeof(char));
    tmp2 = (char *)malloc(2 * sizeof(char));
    strlcpy(tmp1, "", 1);
    strlcpy(tmp2, "A", 2);
    printf("s1: %s, s2: %s, size: 1\n", tmp1, tmp2);
    ft = ft_memcmp(tmp1, tmp2, 1);
    lb = memcmp(tmp1, tmp2, 11);
    printf("ft_memcmp: %d\n", ft);
    printf("   memcmp: %d\n", lb);
    if (ft == lb)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp1);
    free(tmp2);
    printf("\n");

    tmp1 = (char *)malloc(3 * sizeof(char));
    tmp2 = (char *)malloc(3 * sizeof(char));
    strlcpy(tmp1, "\200", 3);
    strlcpy(tmp2, "\0", 3);
    printf("s1: %s, s2: %s, size: 2\n", tmp1, tmp2);
    ft = ft_memcmp(tmp1, tmp2, 2);
    lb = memcmp(tmp1, tmp2, 2);
    printf("ft_memcmp: %d\n", ft);
    printf("   memcmp: %d\n", lb);
    if (ft == lb)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp1);
    free(tmp2);
    printf("\n");

    // tmp1 = NULL;
    // tmp2 = (char *)malloc(13 * sizeof(char));
    // strlcpy(tmp2, "Hello World!", 13);
    // printf("s1: NULL, s2: %s, size: 5\n", tmp2);
    // ft = ft_memcmp(tmp1, tmp2, 5);
    // lb = memcmp(tmp1, tmp2, 5);
    // printf("ft_memcmp: %d\n", ft);
    // printf("   memcmp: %d\n", lb);
    // if (ft == lb)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(tmp1);
    // free(tmp2);
    // printf("\n");

    // tmp1 = NULL;
    // tmp2 = NULL;
    // printf("s1: NULL, s2: NULL, size: 2\n");
    // ft = ft_memcmp(tmp1, tmp2, 2);
    // lb = memcmp(tmp1, tmp2, 2);
    // printf("ft_memcmp: %d\n", ft);
    // printf("   memcmp: %d\n", lb);
    // if (ft == lb)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(tmp1);
    // free(tmp2);
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