#include "ft_printf.h"

void	put_x(unsigned int c, int *len)
{
	unsigned long long	address;
	char				hex[20];
	int					i;
	int					remainder;

	i = 0;
	address = (unsigned long long)c;
	if (address == 0)
		hex[i++] = '0';
	while (address != 0)
	{
		remainder = address % 16;
		if (remainder < 10)
			hex[i++] = (remainder + '0');
		else
			hex[i++] = (remainder - 10 + 'A');
		address /= 16;
	}
	hex[i] = '\0';
	while (i-- > 0)
	{
		hex[i] = ft_tolower(hex[i]);
		ft_putchar_fd(hex[i], 1);
		(*len)++;
	}
}