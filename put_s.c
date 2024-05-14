#include "ft_printf.h"

void put_s(char *c, int *len)
{
    if (c == NULL)
    {
        char *null_str = "(null)";
        while (*null_str)
        {
            ft_putchar_fd(*null_str, 1);
            (*len)++;
            null_str++;
        }
    }
    else
    {
        while (*c)
        {
    	ft_putchar_fd(*c , 1);
		(*len)++;
        c++;
        }
    }
}
