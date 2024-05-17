#include "ft_printf.h"

int	put_x2(unsigned int c, unsigned int *len)
{
	char				hex[20];
	int					i;
	int					remainder;

	i = 0;
	if (c == 0)
		hex[i++] = '0';
	while (c != 0)
	{
		remainder = c % 16;
		if (remainder < 10)
			hex[i++] = (remainder + '0');
		else
			hex[i++] = (remainder - 10 + 'A');
		c /= 16;
	}
	hex[i] = '\0';
	while (i-- > 0)
	{
		if (ft_putchar_fd_2(hex[i], 1) == -1)
			return (-1);
		(*len)++;
	}
	return (1);
}
