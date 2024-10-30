#include "../../libft.h"
#include "../test.h"

int substr_test(void)
{
    int count = 0;

    char *tmp = (char *)malloc(13 * sizeof(char));
    char *exp = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp, "Hello World!", 13);
    int start = 6;
    size_t len = 6;
    strlcpy(exp, "World!", 13);
    printf("str: %s, start: %d, len: %zu\n", tmp, start, len);
    char *ans = ft_substr(tmp, start, len);
    printf("ft_substr: %s\n", ans);
    printf(" expected: %s\n", exp);
    if (strcmp(exp, ans) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(exp);
    free(ans);
    printf("\n");

    tmp = (char *)malloc(13 * sizeof(char));
    exp = (char *)malloc(13 * sizeof(char));
    strlcpy(tmp, "", 13);
    start = 1;
    len = 1;
    strlcpy(exp, "", 13);
    printf("str: %s, start: %d, len: %zu\n", tmp, start, len);
    ans = ft_substr(tmp, start, len);
    printf("ft_substr: %s\n", ans);
    printf(" expected: %s\n", exp);
    if (strcmp(exp, ans) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(tmp);
    free(exp);
    free(ans);
    printf("\n");

    // tmp = NULL;
    // exp = NULL;
    // start = 1;
    // len = 1;
    // printf("str: %s, start: %d, len: %zu\n", tmp, start, len);
    // ans = ft_substr(tmp, start, len);
    // printf("ft_substr: %s\n", ans);
    // printf(" expected: %s\n", exp);
    // if (strcmp(exp, ans) == 0)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(tmp);
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