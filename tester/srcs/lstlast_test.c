#include "../../libft_git/libft.h"
#include "../test.h"

int lstlast_test(void)
{
    int count = 0;

    t_list *list = NULL;
    int a = 1;
    int b = 2;
    int c = 3;
    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(&b);
    t_list *node3 = ft_lstnew(&c);
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
    printf("ft_lstlast: %d\n", *(int *)ft_lstlast(list)->content);
    printf("  expected: %d\n", c);
    if (*(int *)ft_lstlast(list)->content == c)
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(node1);
    printf("\n");

    // list = NULL;
    // printf("ft_lstlast: %s\n", (char *)ft_lstlast(list)->content);
    // printf("  expected: (null)\n");
    // if ((char *)ft_lstlast(list)->content == NULL)
    //     printf("OK\n");
    // else
    // {
    //     printf("KO\n");
    //     count++;
    // }
    // free(list);
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