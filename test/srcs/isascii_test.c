#include "../../libft.h"
#include "../test.h"

int isascii_test(void)
{
	int count = 0;
	int a;
	int b;
	
	printf("argument: 'a'\n");
	a = ft_isascii('a');
	b = isascii('a');
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isascii(' ');
	b = isascii(' ');
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isascii('\0');
	b = isascii('\0');
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 127\n");
	a = ft_isascii(127);
	b = isascii(127);
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 128\n");
	a = ft_isascii(128);
	b = isascii(128);
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: -1\n");
	a = ft_isascii(-1);
	b = isascii(-1);
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");
	
	printf("argument: EOF\n");
	a = ft_isascii(EOF);
	b = isascii(EOF);
	printf("ft_isascii: %d\n", a);
	printf("isascii   : %d\n", b);
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
