#include "ft_printf.h"

static char *ulltoa(unsigned long long n)
{
    char *str;
    int len = 0;
    unsigned long long tmp = n;

    if (n == 0)
        return strdup("0");

    while (tmp > 0) {
        len++;
        tmp /= 10;
    }

    str = malloc(len + 1);
    if (str == NULL)
        return NULL;

    str[len] = '\0';
    while (len > 0) {
        len--;
        str[len] = '0' + (n % 10);
        n /= 10;
    }

    return str;
}

void put_u(unsigned long long c, int *len)
{
	char *str;
    unsigned int i;
    unsigned int a;

    a = 0;
    str = ulltoa(c);
    i = ft_strlen(str);
	while(a != i)
	{
		ft_putchar_fd(str[a] , 1);
        a++;
		(*len)++;
	}
    free(str);
}