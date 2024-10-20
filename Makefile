CC = cc
CCFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRCS = ft_printf.c \


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re