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

    //memset
    printf("\x1b[1mft_memset\x1b[0m\n");
    if (memset_test() == 0)
        printf("\x1b[32mmemset: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mmemset: KO\x1b[0m\n\n");
        count++;
    }

    //bzero
    printf("\x1b[1mft_bzero\x1b[0m\n");
    if (bzero_test() == 0)
        printf("\x1b[32mbzero: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mbzero: KO\x1b[0m\n\n");
        count++;
    }

    //memcpy
    printf("\x1b[1mft_memcpy\x1b[0m\n");
    if (memcpy_test() == 0)
        printf("\x1b[32mmemcpy: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mmemcpy: KO\x1b[0m\n\n");
        count++;
    }

    //memmove
    printf("\x1b[1mft_memmove\x1b[0m\n");
    if (memmove_test() == 0)
        printf("\x1b[32mmemmove: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mmemmove: KO\x1b[0m\n\n");
        count++;
    }

    //memchr
    printf("\x1b[1mft_memchr\x1b[0m\n");
    if (memchr_test() == 0)
        printf("\x1b[32mmemchr: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mmemchr: KO\x1b[0m\n\n");
        count++;
    }

    //memcmp
    printf("\x1b[1mft_memcmp\x1b[0m\n");
    if (memcmp_test() == 0)
        printf("\x1b[32mmemcmp: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mmemcmp: KO\x1b[0m\n\n");
        count++;
    }

    //atoi
    printf("\x1b[1mft_atoi\x1b[0m\n");
    if (atoi_test() == 0)
        printf("\x1b[32matoi: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31matoi: KO\x1b[0m\n\n");
        count++;
    }

    //calloc
    printf("\x1b[1mft_calloc\x1b[0m\n");
    if (calloc_test() == 0)
        printf("\x1b[32mcalloc: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mcalloc: KO\x1b[0m\n\n");
        count++;
    }

    //strdup
    printf("\x1b[1mft_strdup\x1b[0m\n");
    if (strdup_test() == 0)
        printf("\x1b[32mstrdup: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrdup: KO\x1b[0m\n\n");
        count++;
    }

    //substr
    printf("\x1b[1mft_substr\x1b[0m\n");
    if (substr_test() == 0)
        printf("\x1b[32msubstr: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31msubstr: KO\x1b[0m\n\n");
        count++;
    }

    //strjoin
    printf("\x1b[1mft_strjoin\x1b[0m\n");
    if (strjoin_test() == 0)
        printf("\x1b[32mstrjoin: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrjoin: KO\x1b[0m\n\n");
        count++;
    }

    //strtrim
    printf("\x1b[1mft_strtrim\x1b[0m\n");
    if (strtrim_test() == 0)
        printf("\x1b[32mstrtrim: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrtrim: KO\x1b[0m\n\n");
        count++;
    }

    //split
    printf("\x1b[1mft_split\x1b[0m\n");
    if (split_test() == 0)
        printf("\x1b[32msplit: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31msplit: KO\x1b[0m\n\n");
        count++;
    }

    //itoa
    printf("\x1b[1mft_itoa\x1b[0m\n");
    if (itoa_test() == 0)
        printf("\x1b[32mitoa: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mitoa: KO\x1b[0m\n\n");
        count++;
    }

    //strmapi
    printf("\x1b[1mft_strmapi\x1b[0m\n");
    if (strmapi_test() == 0)
        printf("\x1b[32mstrmapi: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstrmapi: KO\x1b[0m\n\n");
        count++;
    }

    //striteri
    printf("\x1b[1mft_striteri\x1b[0m\n");
    if (striteri_test() == 0)
        printf("\x1b[32mstriteri: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mstriteri: KO\x1b[0m\n\n");
        count++;
    }

    //putchar_fd
    printf("\x1b[1mft_putchar_fd\x1b[0m\n");
    if (putchar_fd_test() == 0)
        printf("\x1b[32mputchar_fd: OK\x1b[0m\n\n");
    else
    {
        printf("\x1b[31mputchar_fd: KO\x1b[0m\n\n");
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