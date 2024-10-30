#ifndef TEST_H
#define TEST_H

#include "../libft.h"
#include <fcntl.h>

int isalpha_test(void);
int isdigit_test(void);
int isalnum_test(void);
int isascii_test(void);
int isprint_test(void);
int toupper_test(void);
int tolower_test(void);

int strlen_test(void);
int strchr_test(void);
int strrchr_test(void);
int strncmp_test(void);
int strnstr_test(void);
int strlcpy_test(void);
int strlcat_test(void);

int memset_test(void);
int bzero_test(void);
int memcpy_test(void);
int memmove_test(void);
int memchr_test(void);
int memcmp_test(void);

int atoi_test(void);
int calloc_test(void);
int strdup_test(void);

int substr_test(void);
int strjoin_test(void);
int strtrim_test(void);
int split_test(void);
int itoa_test(void);
int strmapi_test(void);
int striteri_test(void);

int putchar_fd_test(void);

#endif
