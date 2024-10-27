#include "../../libft.h"
#include "../test.h"

int isalnum_test(void)
{
	int count = 0;
	int a;
	int b;
	
	printf("argument: 'a'\n");
	a = ft_isalnum('a');
	b = isalnum('a');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_isalnum('A');
	b = isalnum('A');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_isalnum('0');
	b = isalnum('0');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isalnum(' ');
	b = isalnum(' ');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_isalnum('\\');
	b = isalnum('\\');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isalnum('\0');
	b = isalnum('\0');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isalnum('\x80');
	b = isalnum('\x80');
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

    printf("argument: EOF\n");
	a = ft_isalnum(EOF);
	b = isalnum(EOF);
	printf("ft_isalnum: %d\n", a);
	printf("isalnum   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
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