# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror -I
NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils.c ft_utils.c ft_printf.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
