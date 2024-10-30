#include "../../libft.h"
#include "../test.h"

char func_mapi(unsigned int n, char c)
{
    (void)n;
    c = 'a';
    return c;
}

int strmapi_test(void)
{
    int count = 0;

    char *str = (char *)malloc(20 * sizeof(char));
    char *exp = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "AAAAAAAAAA", 11);
    strlcpy(exp, "aaaaaaaaaa", 11);
    printf("arg: \"%s\", func: convert to 'a'\n", str);
    char *ans = ft_strmapi(str, func_mapi);
    printf("ft_strmapi: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(exp);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "          ", 11);
    strlcpy(exp, "aaaaaaaaaa", 11);
    printf("arg: \"%s\", func: convert to 'a'\n", str);
    ans = ft_strmapi(str, func_mapi);
    printf("ft_strmapi: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(exp);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "", 11);
    strlcpy(exp, "", 11);
    printf("arg: \"%s\", func: convert to 'a'\n", str);
    ans = ft_strmapi(str, func_mapi);
    printf("ft_strmapi: %s\n", ans);
    printf("  expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
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