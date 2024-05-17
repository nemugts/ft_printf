#include "ft_printf.h"

int put_per(unsigned int *len)
{
    if (ft_putchar_fd_2('%', 1) == -1)
      	return -1;
		(*len)++;
    return (1);
}