#include "../../libft.h"
#include "../test.h"

int lstadd_back_test(void)
{
    int count = 0;

    int a = 1;
    int b = 2;
    t_list *list = ft_lstnew(&a);
    t_list *new = ft_lstnew(&b);
    ft_lstadd_back(&list, new);
    printf("ft_lstadd_back: %d -> %d\n", *(int *)list->content, *(int *)list->next->content);
    printf("      expected: %d -> %d\n", a, b);
    if (*(int *)list->content == a && *(int *)list->next->content == b)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    //free(new);
    free(list);
    printf("\n");

    char *s1 = "HELLO";
    char *s2 = "KONICHIWA";
    list = ft_lstnew(s1);
    new = ft_lstnew(s2);
    ft_lstadd_back(&list, new);
    printf("ft_lstadd_back: %s -> %s\n", (char *)list->content, (char *)list->next->content);
    printf("      expected: %s -> %s\n", s1, s2);
    if (strcmp((char *)list->content, s1) == 0 && strcmp((char *)list->next->content, s2) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    //free(new);
    free(list);
    printf("\n");

    list = NULL;
    new = ft_lstnew(s1);
    ft_lstadd_back(&list, new);
    printf("ft_lstadd_back: %s\n", (char *)list->content);
    printf("      expected: %s\n", s1);
    if (strcmp((char *)list->content, s1) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    //free(new);
    free(list);
    printf("\n");

    list = ft_lstnew(s1);
    ft_lstadd_back(&list, NULL);
    printf("size when new is NULL: %d\n", ft_lstsize(list));
    printf("             expected: 1\n");
    if (ft_lstsize(list) == 1)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    //free(new);
    free(list);
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