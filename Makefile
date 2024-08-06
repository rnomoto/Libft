NAME = libft.a
SRCS = ${wildcard libft_git/*.c}
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAG = -Wall -Wextra -Werror

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all