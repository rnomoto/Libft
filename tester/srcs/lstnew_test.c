#include "../../libft_git/libft.h"
#include "../test.h"

int lstnew_test(void)
{
    int count = 0;

    int n = 42;
    printf("arg: %d\n", n);
    t_list *ret = ft_lstnew(&n);
    printf("ft_lstnew: %d\n", *(int *)ret->content);
    printf(" expected: %d\n", n);
    if (*(int *)ret->content == n)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(ret);
    printf("\n");

    char *str = "Hello World!";
    printf("arg: %s\n", str);
    ret = ft_lstnew(str);
    printf("ft_lstnew: %s\n", (char *)ret->content);
    printf(" expected: %s\n", str);
    if (strcmp((char *)ret->content, str) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(ret);
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