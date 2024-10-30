#include "../../libft.h"
#include "../test.h"

int strjoin_test(void)
{
    int count = 0;

    char *s1 = (char *)malloc(30 * sizeof(char));
    char *s2 = (char *)malloc(10 * sizeof(char));
    strlcpy(s1, "123456789", 10);
    strlcpy(s2, "abcdefghi", 10);
    printf("s1: %s, s2: %s\n", s1, s2);
    char *ans = ft_strjoin(s1, s2);
    ft_strlcat(s1, s2, 30);
    printf("ft_substr: %s\n", ans);
    printf(" expected: %s\n", s1);
    if (strcmp(ans, s1) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(s1);
    free(s2);
    free(ans);
    printf("\n");

    s1 = (char *)malloc(30 * sizeof(char));
    s2 = (char *)malloc(10 * sizeof(char));
    strlcpy(s1, "", 10);
    strlcpy(s2, "abcdefghi", 10);
    printf("s1: %s, s2: %s\n", s1, s2);
    ans = ft_strjoin(s1, s2);
    ft_strlcat(s1, s2, 30);
    printf("ft_substr: %s\n", ans);
    printf(" expected: %s\n", s1);
    if (strcmp(ans, s1) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(s1);
    free(s2);
    free(ans);
    printf("\n");

    s1 = (char *)malloc(30 * sizeof(char));
    s2 = (char *)malloc(10 * sizeof(char));
    strlcpy(s1, "123456789", 10);
    strlcpy(s2, "", 10);
    printf("s1: %s, s2: %s\n", s1, s2);
    ans = ft_strjoin(s1, s2);
    ft_strlcat(s1, s2, 30);
    printf("ft_substr: %s\n", ans);
    printf(" expected: %s\n", s1);
    if (strcmp(ans, s1) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(s1);
    free(s2);
    free(ans);
    printf("\n");

    s1 = (char *)malloc(30 * sizeof(char));
    s2 = (char *)malloc(10 * sizeof(char));
    strlcpy(s1, "", 10);
    strlcpy(s2, "", 10);
    printf("s1: %s, s2: %s\n", s1, s2);
    ans = ft_strjoin(s1, s2);
    ft_strlcat(s1, s2, 30);
    printf("ft_substr: %s\n", ans);
    printf(" expected: %s\n", s1);
    if (strcmp(ans, s1) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(s1);
    free(s2);
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