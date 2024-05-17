#include "ft_printf.h"

int	ft_putchar_fd_2(char c, int fd)
{
	return(write(fd, &c, 1));
}