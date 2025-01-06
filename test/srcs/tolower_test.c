#include "../../libft.h"
#include "../test.h"

int tolower_test(void)
{
	int count = 0;
	int a;
	int b;

	printf("argument: 'A'\n");
	a = ft_tolower('A');
	b = tolower('A');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: 'a'\n");
	a = ft_tolower('a');
	b = tolower('a');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '0'\n");
	a = ft_tolower('0');
	b = tolower('0');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: ' '\n");
	a = ft_tolower(' ');
	b = tolower(' ');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\'\n");
	a = ft_tolower('\\');
	b = tolower('\\');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\0'\n");
	a = ft_tolower('\0');
	b = tolower('\0');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: '\\x80'\n");
	a = ft_tolower((unsigned char)'\x80');
	b = tolower('\x80');
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
	if (a == b)
		printf("OK\n");
	else if (a != b)
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("argument: EOF\n");
	a = ft_tolower(EOF);
	b = tolower(EOF);
	printf("ft_tolower: %d\n", a);
	printf("tolower   : %d\n", b);
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