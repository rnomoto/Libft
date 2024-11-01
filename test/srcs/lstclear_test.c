#include "../../libft.h"
#include "../test.h"

int lstclear_test(void)
{
    int count = 0;

    t_list *list = NULL;
    int *a = (int *)malloc(sizeof(int));
    *a = 1;
    t_list *node1 = ft_lstnew(a);
    int *b = (int *)malloc(sizeof(int));
    *b = 2;
    t_list *node2 = ft_lstnew(b);
    int *c = (int *)malloc(sizeof(int));
    *c = 3;
    t_list *node3 = ft_lstnew(c);
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
    ft_lstclear(&list, del);
    if (list == NULL)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(list);
    printf("\n");

    //lstclear do nothing when del == NULL or list == NULL

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