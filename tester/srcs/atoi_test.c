#include "../../libft_git/libft.h"
#include "../test.h"

int atoi_test(void)
{
    int count = 0;

    char *tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "0123456789", 20);
    printf("str: %s\n", tmp);
    int ft = ft_atoi(tmp);
    int ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "-12345", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "-2147483648", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "-2147483649", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "+-++12345", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "3.1415", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "0x1A", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "9223372036854775807", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "9223372036854775808", 20);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(21 * sizeof(char));
    strlcpy(tmp, "-9223372036854775808", 21);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(21 * sizeof(char));
    strlcpy(tmp, "-9223372036854775810", 21);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    tmp = (char *)malloc(21 * sizeof(char));
    strlcpy(tmp, "18446744073709551615", 21);
    printf("str: %s\n", tmp);
    ft = ft_atoi(tmp);
    ld = atoi(tmp);
    printf("ft_atoi: %d\n", ft);
    printf("   atoi: %d\n", ld);
    if (ft == ld)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    printf("\n");

    // tmp = NULL;
    // printf("str: NULL\n");
    // ft = ft_atoi(tmp);
    // ld = atoi(tmp);
    // printf("ft_atoi: %d\n", ft);
    // printf("   atoi: %d\n", ld);
    // if (ft == ld)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(tmp);
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