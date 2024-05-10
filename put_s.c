#include "ft_printf.h"

void put_s(char *c, int *len)
{
    while (*c)
    {
    	ft_putchar_fd(*c , 1);
		(*len)++;
        c++;
    }
}