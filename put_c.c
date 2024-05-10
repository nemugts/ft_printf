#include "ft_printf.h"

void put_c(char c, int *len)
{
    ft_putchar_fd(c , 1);
		(*len)++;
}