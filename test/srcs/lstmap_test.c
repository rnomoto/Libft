#include "../../libft.h"
#include "../test.h"

void *func_map(void *ptr)
{
    unsigned char *cast = (unsigned char *)ptr;
    int i = 0;
    while (cast[i])
    {
        cast[i] = 'a';
        i++;
    }
    return cast;
}

int lstmap_test(void)
{
    int count = 0;

    t_list *list = NULL;
    char *str1 = (char *)malloc(20 * sizeof(char));
    ft_strlcpy(str1, "1234567890", 20);
    t_list *node1 = ft_lstnew(str1);
    ft_lstadd_back(&list, node1);
    char *str2 = (char *)malloc(20 * sizeof(char));
    ft_strlcpy(str2, "abcdefghij", 20);
    t_list *node2 = ft_lstnew(str2);
    ft_lstadd_back(&list, node2);
    char *str3 = (char *)malloc(20 * sizeof(char));
    ft_strlcpy(str3, "ABCDEFGHIJ", 20);
    t_list *node3 = ft_lstnew(str3);
    ft_lstadd_back(&list, node3);
    printf("      arg: %s -> %s -> %s\n", (unsigned char *)list->content, (unsigned char *)list->next->content, (unsigned char *)list->next->next->content);
    printf("convert to 'a'\n");
    t_list *newlist = ft_lstmap(list, func_map, del);
    printf("ft_lstmap: %s -> %s -> %s\n", (unsigned char *)newlist->content, (unsigned char *)newlist->next->content, (unsigned char *)newlist->next->next->content);
    printf(" expected: aaaaaaaaaa -> aaaaaaaaaa -> aaaaaaaaaa\n");
    if (strcmp((char *)newlist->content, "aaaaaaaaaa") == 0 && 
            (strcmp((char *)newlist->next->content, "aaaaaaaaaa") == 0 && strcmp((char *)newlist->next->next->content, "aaaaaaaaaa") == 0))
        printf("OK\n");
    else
    {
        printf("KO\n");
        count++;
    }
    free(newlist);
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