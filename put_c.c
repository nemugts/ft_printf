#include "ft_printf.h"

void put_c(char c, int *len)
{
    ft_putnbr_fd(c , 1);
		(*len)++;
}