#include "ft_printf.h"

int	put_c(char c, unsigned int *len)
{
	if (ft_putchar_fd_2(c, 1) == -1)
		return (-1);
	(*len)++;
	return (1);
}
