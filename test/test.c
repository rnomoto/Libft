#include "../libft.h"
#include "test.h"

int main(void)
{
    int count = 0;

    //isalpha
    printf("\x1b[1mft_isalpha\x1b[0m\n");
    if (isalpha_test() == 0)
        printf("\x1b[32misalpha: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31misalpha: KO\x1b[0m\n\n");
        count++;
    }

    //isdigit
    printf("\x1b[1mft_isdigit\x1b[0m\n");
    if (isdigit_test() == 0)
        printf("\x1b[32misdigit: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31misdigit: KO\x1b[0m\n\n");
        count++;
    }

    //isalnum
    printf("\x1b[1mft_isalnum\x1b[0m\n");
    if (isalnum_test() == 0)
        printf("\x1b[32misalnum: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31misalnum: KO\x1b[0m\n\n");
        count++;
    }

    //isascii
    printf("\x1b[1mft_isascii\x1b[0m\n");
    if (isascii_test() == 0)
        printf("\x1b[32misascii: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31misascii: KO\x1b[0m\n\n");
        count++;
    }

    //isprint
    printf("\x1b[1mft_isprint\x1b[0m\n");
    if (isprint_test() == 0)
        printf("\x1b[32misprint: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31misprint: KO\x1b[0m\n\n");
        count++;
    }

    //toupper
    printf("\x1b[1mft_toupper\x1b[0m\n");
    if (toupper_test() == 0)
        printf("\x1b[32mtoupper: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mtoupper: KO\x1b[0m\n\n");
        count++;
    }

    //tolower
    printf("\x1b[1mft_tolower\x1b[0m\n");
    if (tolower_test() == 0)
        printf("\x1b[32mtolower: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mtolower: KO\x1b[0m\n\n");
        count++;
    }

    //strlen
    printf("\x1b[1mft_strlen\x1b[0m\n");
    if (strlen_test() == 0)
        printf("\x1b[32mstrlen: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrlen: KO\x1b[0m\n\n");
        count++;
    }

    //strchr
    printf("\x1b[1mft_strchr\x1b[0m\n");
    if (strchr_test() == 0)
        printf("\x1b[32mstrchr: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrchr: KO\x1b[0m\n\n");
        count++;
    }

    //strrchr
    printf("\x1b[1mft_strrchr\x1b[0m\n");
    if (strrchr_test() == 0)
        printf("\x1b[32mstrrchr: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrrchr: KO\x1b[0m\n\n");
        count++;
    }

    //strncmp
    printf("\x1b[1mft_strncmp\x1b[0m\n");
    if (strncmp_test() == 0)
        printf("\x1b[32mstrncmp: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrncmp: KO\x1b[0m\n\n");
        count++;
    }

    //strnstr
    printf("\x1b[1mft_strnstr\x1b[0m\n");
    if (strnstr_test() == 0)
        printf("\x1b[32mstrnstr: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrnstr: KO\x1b[0m\n\n");
        count++;
    }

    //strlcpy
    printf("\x1b[1mft_strlcpy\x1b[0m\n");
    if (strlcpy_test() == 0)
        printf("\x1b[32mstrlcpy: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrlcpy: KO\x1b[0m\n\n");
        count++;
    }

    //strlcat
    printf("\x1b[1mft_strlcat\x1b[0m\n");
    if (strlcat_test() == 0)
        printf("\x1b[32mstrlcat: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrlcat: KO\x1b[0m\n\n");
        count++;
    }


    //ALL
    if (count == 0)
        printf("\x1b[32;1mALL TEST CLEAR !\n");
    else if (count == 1)
        printf("\x1b[31;1mJUST 1 TEST FAILED!!\n");
    else
        printf("\x1b[31;1m%d TESTS FAILED.\n", count);

    return 0;
}