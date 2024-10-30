#include "../../libft.h"
#include "../test.h"

int itoa_test(void)
{
    int count = 0;

    int n = 12345;
    printf("arg: %d\n", n);
    char *exp = (char *)malloc(20 * sizeof(char));
    strlcpy(exp, "12345", 20);
    char *ans = ft_itoa(n);
    printf(" ft_itoa: %s\n", ans);
    printf("expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(exp);
    free(ans);
    printf("\n");

    n = -12345;
    printf("arg: %d\n", n);
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(exp, "-12345", 20);
    ans = ft_itoa(n);
    printf(" ft_itoa: %s\n", ans);
    printf("expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(exp);
    free(ans);
    printf("\n");

    n = -2147483648;
    printf("arg: %d\n", n);
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(exp, "-2147483648", 20);
    ans = ft_itoa(n);
    printf(" ft_itoa: %s\n", ans);
    printf("expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(exp);
    free(ans);
    printf("\n");

    // n = 2147483648;
    // printf("arg: %d\n", n);
    // exp = (char *)malloc(20 * sizeof(char));
    // strlcpy(exp, "-2147483648", 20);
    // ans = ft_itoa(n);
    // printf(" ft_itoa: %s\n", ans);
    // printf("expected: %s\n", exp);
    // if (strcmp(ans, exp) == 0)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(exp);
    // free(ans);
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