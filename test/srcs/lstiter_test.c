#include "../../libft.h"
#include "../test.h"

void func(void *ptr)
{
    (void)ptr;
    printf("func\n");
}

int lstiter_test(void)
{
    int count = 0;

    t_list *list = NULL;
    int *a = (int *)malloc(sizeof(int));
    *a = 1;
    t_list *node1 = ft_lstnew(a);
    int *b = (int *)malloc(sizeof(int));
    *b = 2;
    t_list *node2 = ft_lstnew(b);
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstiter(list, func);
    printf("ft_lstiter: %d -> %d\n", *(int *)list->content, *(int *)list->next->content);
    if (*(int *)list->content == *a && *(int *)list->next->content == *b)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(node1);
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