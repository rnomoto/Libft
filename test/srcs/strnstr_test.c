#include "../../libft.h"
#include "../test.h"

int strnstr_test(void)
{
    int count = 0;
	char *a;
	char *b;
	
	printf("arg1: \"Hello World!\" arg2: \"World\"\n");
	printf("arg3: 20\n");
	a = ft_strnstr("Hello World!", "World", 20);
	b = strnstr("Hello World!", "World", 20);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"World\"\n");
	printf("arg3: 3\n");
	a = ft_strnstr("Hello World!", "World", 3);
	b = strnstr("Hello World!", "World", 3);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"World\"\n");
	printf("arg3: 0\n");
	a = ft_strnstr("Hello World!", "World", 0);
	b = strnstr("Hello World!", "World", 0);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"WoRld\"\n");
	printf("arg3: 20\n");
	a = ft_strnstr("Hello World!", "WoRld", 20);
	b = strnstr("Hello World!", "WoRld", 20);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello42World42!\" arg2: \"42\"\n");
	printf("arg3: 20\n");
	a = ft_strnstr("Hello42World42!", "42", 20);
	b = strnstr("Hello42World42!", "42", 20);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello\\0World!\" arg2: \"o\\0\"\n");
	printf("arg3: 20\n");
	a = ft_strnstr("Hello\0World!", "o\0", 20);
	b = strnstr("Hello\0World!", "o\0", 20);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"\"\n");
	printf("arg3: 20\n");
	a = ft_strnstr("Hello World!", "", 20);
	b = strnstr("Hello World!", "", 20);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"Hello World!\" arg2: \"\"\n");
	printf("arg3: 20\n");
	a = ft_strnstr("Hello World!", "", 0);
	b = strnstr("Hello World!", "", 0);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: \"\" arg2: \"\"\n");
	printf("arg3: 0\n");
	a = ft_strnstr("", "", 0);
	b = strnstr("", "", 0);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	printf("arg1: NULL arg2: \"Hello\"\n");
	printf("arg3: 0\n");
	a = ft_strnstr(NULL, "Hello", 0);
	b = strnstr(NULL, "Hello", 0);
	printf("ft_strnstr: %s\n", a);
	printf("strnstr   : %s\n", b);
	if ((a == NULL && b == NULL) || strcmp(a, b) == 0)
		printf("OK\n");
	else
	{
		printf("KO\n");
		count++;
	}
	printf("\n");

	// printf("arg1: \"Hello\" arg2: NULL\n");
	// printf("arg3: 0\n");
	// a = ft_strnstr("Hello", NULL, 0);
	// b = strnstr("Hello", NULL, 0);
	// printf("ft_strnstr: %s\n", a);
	// printf("strnstr   : %s\n", b);
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
