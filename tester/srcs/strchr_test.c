#include "../../libft_git/libft.h"
#include "../test.h"

int strchr_test(void)
{
	int count = 0;
	char *a;
	char *b;
	
	printf("arg1: \"Hello World!\" arg2: 'o'\n");
	a = ft_strchr("Hello World!", 'o');
	b = strchr("Hello World!", 'o');
	printf("ft_strchr: %s\n", a);
	printf("strchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: '1'\n");
	a = ft_strchr("Hello World!", '1');
	b = strchr("Hello World!", '1');
	printf("ft_strchr: %s\n", a);
	printf("strchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: '\\0'\n");
	a = ft_strchr("Hello World!", '\0');
	b = strchr("Hello World!", '\0');
	printf("ft_strchr: %s\n", a);
	printf("strchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"\" arg2: '1'\n");
	a = ft_strchr("", '1');
	b = strchr("", '1');
	printf("ft_strchr: %s\n", a);
	printf("strchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello\\nWorld!\" arg2: '\\n'\n");
	a = ft_strchr("Hello\nWorld!", '\n');
	b = strchr("Hello\nWorld!", '\n');
	printf("ft_strchr: %s\n", a);
	printf("strchr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	// printf("arg1: NULL arg2: '1'\n");
	// a = ft_strchr(NULL, '1');
	// b = strchr(NULL, '1');
	// printf("ft_strchr: %s\n", a);
	// printf("strchr   : %s\n", b);
	// if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
	// 	printf("OK\n");
	// else
	// {
	// 	printf("KO\n");
	// 	count++;
	// }
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
