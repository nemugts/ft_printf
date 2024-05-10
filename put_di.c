#include "ft_printf.h"

void put_di(int c, int *len)
{
	char *str;
    int i;
    int a;

    a = 0;
    str = ft_itoa(c);
    i = ft_strlen(str);
	while(a != i)
	{
		ft_putchar_fd(str[a] , 1);
        a++;
		(*len)++;
	}
    free(str);
}