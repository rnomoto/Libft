#include "../../libft.h"
#include "../test.h"

int isalpha_test(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: 'a'\n");
	a = ft_isalpha('a');
	b = isalpha('a');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'A'\n");
	a = ft_isalpha('A');
	b = isalpha('A');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_isalpha('0');
	b = isalpha('0');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isalpha(' ');
	b = isalpha(' ');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_isalpha('\\');
	b = isalpha('\\');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isalpha('\0');
	b = isalpha('\0');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isalpha('\x80');
	b = isalpha('\x80');
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: E0F\n");
	a = ft_isalpha(EOF);
	b = isalpha(EOF);
	printf("ft_isalpha: %d\n", a);
	printf("isalpha   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
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