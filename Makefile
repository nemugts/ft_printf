NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I
ARRC = ar rcs
RM		= rm -f
LIBFT	= ./libft/	
INCS	= ft_printf.h
SRCS	= 
OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make bonus -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(ARRC) $(NAME) $(OBJS)

all: $(NAME)

bonus: all
	

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