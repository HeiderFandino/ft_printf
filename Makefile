NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_print_char.c ft_print_hex_long.c ft_print_ptr.c ft_print_str.c ft_print_nbr.c ft_print_unsigned.c ft_printf.c ft_print_hexa.c ft_handle_format.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS) ft_printf.h Makefile
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

