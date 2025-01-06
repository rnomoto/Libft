#include "../../libft.h"
#include "../test.h"

int toupper_test(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: 'a'\n");
	a = ft_toupper('a');
	b = toupper('a');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_toupper('A');
	b = toupper('A');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_toupper('0');
	b = toupper('0');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_toupper(' ');
	b = toupper(' ');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_toupper('\\');
	b = toupper('\\');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_toupper('\0');
	b = toupper('\0');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_toupper((unsigned char)'\x80');
	b = toupper('\x80');
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_toupper(EOF);
	b = toupper(EOF);
	printf("ft_toupper: %d\n", a);
	printf("toupper   : %d\n", b);
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
