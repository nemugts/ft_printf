#include "ft_printf.h"

int put_s(char *c, unsigned int *len)
{
    if (c == NULL)
    {
        char *null_str = "(null)";
        while (*null_str)
        {
            // ft_putchar_fd(*null_str, 1);
            if (ft_putchar_fd_2(*null_str, 1) == -1)
   				{
    				return -1;
				}
            (*len)++;
            null_str++;
        }
    }
    else
    {
        while (*c)
        {
    	// ft_putchar_fd(*c , 1);
        if (ft_putchar_fd_2(*c, 1) == -1)
   		{
      		return -1;
		}
		(*len)++;
        c++;
        }
    }
    return 1;
}
