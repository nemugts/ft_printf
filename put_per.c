#include "ft_printf.h"

void put_per(int *len)
{
    ft_putchar_fd('%' , 1);
		(*len)++;
}