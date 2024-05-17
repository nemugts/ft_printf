NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I
ARRC = ar rcs
RM		= rm -f
LIBFT	= ./libft/	
INCS	= ft_printf.h
SRCS	= ft_printf.c put_c.c put_s.c put_p.c put_di.c put_u.c put_x.c put_x2.c put_per.c ft_putchar_fd_2.c ft_putstr_fd_2.c
OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make bonus -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(ARRC) $(NAME) $(OBJS)

all: $(NAME)

# bonus: all

.c.o: $(OBJS)
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re