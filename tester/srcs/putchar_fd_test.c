#include "../../libft_git/libft.h"
#include "../test.h"

int putchar_fd_test(void)
{
    int count = 0;
	
    char c = 'a';
    int fd = 1;
    printf("arg: %c, fd: %d\n", c, fd);
    ft_putchar_fd(c, fd);
    printf("\nThis test cannnot judge.\n\n");

    char buf[2];
    fd = open("fd_test.txt", O_RDWR | O_CREAT, S_IREAD | S_IWRITE);
    printf("arg: %c, fd: \"fd_test.txt\"\n", c);
    if (fd == -1)
    {
        printf("open error.\n");
        count++;
    }
    else
    {
        ft_putchar_fd(c, fd);
        lseek(fd, 0, SEEK_SET);
        read(fd, buf, 1);
        printf("ft_putchar_fd: %c\n", buf[0]);
        printf("     expected: %c\n", c);
        if (c == buf[0])
            printf("OK\n");
        else
        {
            printf("KO\n");
            count++;
        }
    }
    close(fd);
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