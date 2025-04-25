#include "../../libft_git/libft.h"
#include "../test.h"

int putnbr_fd_test(void)
{
    int count = 0;

    int nbr = -12345;
    int fd = 1;
    printf("arg: %d, fd: %d\n", nbr, fd);
    ft_putnbr_fd(nbr, fd);
    printf("\nThis test cannnot judge.\n\n");

    char buf[20];
    nbr = INT_MIN;
    fd = 1;
    printf("arg: %d, fd: %d\n", nbr, fd);
    ft_putnbr_fd(nbr, fd);
    printf("\nThis test cannnot judge.\n\n");

    nbr = -12345;
    fd = open("fd_test.txt", O_RDWR | O_CREAT, S_IWRITE | S_IREAD);
    printf("arg: %d, fd: %d\n", nbr, fd);
    if (fd == -1)
    {
        printf("open error.");
        count++;
    }
    else
    {
        ft_putnbr_fd(nbr, fd);
        ft_putchar_fd('\0', fd);
        lseek(fd, 0, SEEK_SET);
        read(fd, buf, 20);
        printf("ft_putnbr_fd: %s\n", buf);
        printf("    expected: -12345\n");
        if (strcmp(buf, "-12345") == 0)
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