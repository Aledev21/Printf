CC = cc
CCFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRCS = ft_itoaprintf.c\
		ft_printhex.c \
		ft_printptr.c \
		ft_putstr.c \
		ft_printchar.c \
		ft_printnbr.c \
		ft_printstr.c \
		ft_printf.c \
		ft_printper.c \
		ft_printunsigned.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re