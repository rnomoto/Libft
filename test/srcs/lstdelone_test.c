#include "../../libft.h"
#include "../test.h"

void del(void *ptr)
{
	free(ptr);
}

int lstdelone_test(void)
{
    int count = 0;

    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *a = 1;
    *b = 2;
    *c = 3;
    t_list *list = NULL;
    t_list *node1 = ft_lstnew(a);
    t_list *node2 = ft_lstnew(b);
    t_list *node3 = ft_lstnew(c);
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
    printf("list before lstdelone: %d -> %d -> %d\n", *(int *)list->content, *(int *)list->next->content, *(int *)list->next->next->content);
    node1->next = node2->next;
    ft_lstdelone(node2, del);
    printf(" list after lstdelone: %d -> %d\n", *(int *)list->content, *(int *)list->next->content);
    if ((*(int *)list->content == *a && *(int *)list->next->content == *c) && ft_lstsize(list) == 2)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(node1);
    free(node3);
    printf("\n");

    //behavior undefined if lst == NULL
    //if del == NULL, lstdelone do nothing, just return.

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
