#include "../../libft_git/libft.h"
#include "../test.h"

int strtrim_test(void)
{
    int count = 0;

    char *tmp = (char *)malloc(20 * sizeof(char));
    char *set = (char *)malloc(5 * sizeof(char));
    char *exp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "111Hello World!111", 20);
    strlcpy(set, "1", 5);
    strlcpy(exp, "Hello World!", 20);
    printf("str: \"%s\", set: \"%s\"\n", tmp, set);
    char *ans = ft_strtrim(tmp, set);
    printf("ft_strtrim: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(set);
    free(exp);
    free(ans);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    set = (char *)malloc(5 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "111Hello1World!111", 20);
    strlcpy(set, "1", 5);
    strlcpy(exp, "Hello1World!", 20);
    printf("str: \"%s\", set: \"%s\"\n", tmp, set);
    ans = ft_strtrim(tmp, set);
    printf("ft_strtrim: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(set);
    free(exp);
    free(ans);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    set = (char *)malloc(5 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "1234A2AA22331122", 20);
    strlcpy(set, "1234", 5);
    strlcpy(exp, "A2AA", 20);
    printf("str: \"%s\", set: \"%s\"\n", tmp, set);
    ans = ft_strtrim(tmp, set);
    printf("ft_strtrim: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(set);
    free(exp);
    free(ans);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    set = (char *)malloc(5 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "111Hello1World!111", 20);
    strlcpy(set, "", 5);
    strlcpy(exp, "111Hello1World!111", 20);
    printf("str: \"%s\", set: \"%s\"\n", tmp, set);
    ans = ft_strtrim(tmp, set);
    printf("ft_strtrim: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(set);
    free(exp);
    free(ans);
    printf("\n");

    tmp = (char *)malloc(20 * sizeof(char));
    set = (char *)malloc(5 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(tmp, "", 20);
    strlcpy(set, "1234", 5);
    strlcpy(exp, "", 20);
    printf("str: \"%s\", set: \"%s\"\n", tmp, set);
    ans = ft_strtrim(tmp, set);
    printf("ft_strtrim: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(set);
    free(exp);
    free(ans);
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