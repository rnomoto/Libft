#include "../../libft.h"
#include "../test.h"

int lstadd_front_test(void)
{
    int count = 0;

    int a = 1;
    t_list *list = ft_lstnew(&a);
    int b = 2;
    t_list *new = ft_lstnew(&b);
    ft_lstadd_front(&list, new);
    printf("ft_lstadd_front: %d -> %d\n", *(int *)list->content, *(int *)list->next->content);
    printf("       expected: %d -> %d\n", b, a);
    if (*(int *)list->content == b && *(int *)list->next->content == a)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(new);
    //free(list);
    printf("\n");

    char *s1 = "HELLO";
    list = ft_lstnew(s1);
    char *s2 = "KONICHIWA";
    new = ft_lstnew(s2);
    ft_lstadd_front(&list, new);
    printf("ft_lstadd_front: %s -> %s\n", (char *)list->content, (char *)list->next->content);
    printf("       expected: %s -> %s\n", s2, s1);
    if (strcmp((char *)list->content, s2) == 0 && strcmp((char *)list->next->content, s1) == 0)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(new);
    //free(list);
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