#include "../../libft.h"
#include "../test.h"

int putendl_fd_test(void)
{
    int count = 0;

    char *str = "Hello World!";
    int fd = 1;
    printf("arg: %s, fd: %d\n", str, fd);
    ft_putendl_fd(str, fd);
    printf("\nThis test cannnot judge.\n\n");

    char buf[20];
    fd = open("fd_test.txt", O_RDWR | O_CREAT, S_IWRITE | S_IREAD);
    printf("arg: %s, fd: \"fd_test.txt\"\n", str);
    if (fd == -1)
    {
        printf("open error.");
        count++;
    }
    else
    {
        ft_putendl_fd(str, fd);
        lseek(fd, 0, SEEK_SET);
        read(fd, buf, 20);
        printf("ft_putstr_fd: %s\n", buf);
        //There's no '\0' in buf.
        printf("    expected: %s\n\n", str);
        if (strncmp(buf, str, 12) == 0 && buf[12] == '\n')
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