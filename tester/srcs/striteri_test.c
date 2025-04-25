#include "../../libft_git/libft.h"
#include "../test.h"

void func_iteri(unsigned int n, char *s)
{
    (void)n;
    s[0] = 'a';
}

int striteri_test(void)
{
    int count = 0;

    char *ans = (char *)malloc(20 * sizeof(char));
    char *exp = (char *)malloc(20 * sizeof(char));
    strlcpy(ans, "AAAAAAAAAA", 20);
    strlcpy(exp, "aaaaaaaaaa", 20);
    printf("arg: \"%s\", func: convert to 'a'\n", ans);
    ft_striteri(ans, func_iteri);
    printf("ft_striteri: %s\n", ans);
    printf("   expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(ans);
    free(exp);
    printf("\n");

    ans = (char *)malloc(20 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(ans, "          ", 20);
    strlcpy(exp, "aaaaaaaaaa", 20);
    printf("arg: \"%s\", func: convert to 'a'\n", ans);
    ft_striteri(ans, func_iteri);
    printf("ft_striteri: %s\n", ans);
    printf("   expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(ans);
    free(exp);
    printf("\n");

    ans = (char *)malloc(20 * sizeof(char));
    exp = (char *)malloc(20 * sizeof(char));
    strlcpy(ans, "", 20);
    strlcpy(exp, "", 20);
    printf("arg: \"%s\", func: convert to 'a'\n", ans);
    ft_striteri(ans, func_iteri);
    printf("ft_striteri: %s\n", ans);
    printf("   expected: %s\n", exp);
    if (strcmp(ans, exp) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(ans);
    free(exp);
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