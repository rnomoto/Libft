#include "../../libft.h"
#include "../test.h"

int isprint_test(void)
{
	int count = 0;
	int a;
	int b;
	
	printf("argument: '0'\n");
	a = ft_isprint('0');
	b = isprint('0');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'a'\n");
	a = ft_isprint('a');
	b = isprint('a');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_isprint(' ');
	b = isprint(' ');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\n'\n");
	a = ft_isprint('\n');
	b = isprint('\n');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_isprint('\0');
	b = isprint('\0');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_isprint('\x80');
	b = isprint('\x80');
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
	if (a == b || (a != 0 && b != 0))
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_isprint(EOF);
	b = isprint(EOF);
	printf("ft_isprint: %d\n", a);
	printf("isprint   : %d\n", b);
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
