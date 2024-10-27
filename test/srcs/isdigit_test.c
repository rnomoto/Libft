#include "../../libft.h"
#include "../test.h"

int isdigit_test(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: '0'\n");
	a = ft_isdigit('0');
	b = isdigit('0');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'a'\n");
	a = ft_isdigit('a');
	b = isdigit('a');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_isdigit('A');
	b = isdigit('A');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isdigit(' ');
	b = isdigit(' ');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_isdigit('\\');
	b = isdigit('\\');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isdigit('\0');
	b = isdigit('\0');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isdigit('\x80');
	b = isdigit('\x80');
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_isdigit(EOF);
	b = isdigit(EOF);
	printf("ft_isdigit: %d\n", a);
	printf("isdigit   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
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
