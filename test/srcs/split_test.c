#include "../../libft.h"
#include "../test.h"

int split_test(void)
{
    int count = 0;

    char *str = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "Hello World!", 20);
    char c = ' ';
    printf("str: \"%s\"\n  c: '%c'\n", str, c);
    char **ans = ft_split(str, c);
    printf("ft_split:\n%s\n%s\n", ans[0], ans[1]);
    printf("expected:\nHello\nWorld!\n");
    if (strcmp(ans[0], "Hello") == 0 && strcmp(ans[1], "World!") == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "Hello  World!", 20);
    c = ' ';
    printf("str: \"%s\"\n  c: '%c'\n", str, c);
    ans = ft_split(str, c);
    printf("ft_split:\n%s\n%s\n", ans[0], ans[1]);
    printf("expected:\nHello\nWorld!\n");
    if (strcmp(ans[0], "Hello") == 0 && strcmp(ans[1], "World!") == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    strlcpy(str, " Hello World!", 20);
    c = ' ';
    printf("str: \"%s\"\n  c: '%c'\n", str, c);
    ans = ft_split(str, c);
    printf("ft_split:\n%s\n%s\n", ans[0], ans[1]);
    printf("expected:\nHello\nWorld!\n");
    if (strcmp(ans[0], "Hello") == 0 && strcmp(ans[1], "World!") == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "Hello World!", 20);
    c = 'o';
    printf("str: \"%s\"\n  c: '%c'\n", str, c);
    ans = ft_split(str, c);
    printf("ft_split:\n%s\n%s\n%s\n", ans[0], ans[1], ans[2]);
    printf("expected:\nHell\n W\nrld!\n");
    if ((strcmp(ans[0], "Hell") == 0 && strcmp(ans[1], " W") == 0) && strcmp(ans[2], "rld!") == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "Hello World!", 20);
    c = 'A';
    printf("str: \"%s\"\n  c: '%c'\n", str, c);
    ans = ft_split(str, c);
    printf("ft_split:\n%s\n", ans[0]);
    printf("expected:\nHello World!\n");
    if (strcmp(ans[0], "Hello World!") == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
    free(ans);
    printf("\n");

    str = (char *)malloc(20 * sizeof(char));
    strlcpy(str, "", 20);
    c = 'A';
    printf("str: \"%s\"\n  c: '%c'\n", str, c);
    ans = ft_split(str, c);
    printf("ft_split:\n%s\n", ans[0]);
    printf("expected:\nNULL\n");
    if (ans[0] == NULL)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(str);
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