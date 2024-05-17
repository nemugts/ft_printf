#include "ft_printf.h"

int	put_p(void *ptr, unsigned int *len)
{
	unsigned long long	address;
	char				hex[20];
	int					i;
	int					remainder;

	if (ptr == NULL)
    {
        if(ft_putstr_fd_2("0x0", 1) == -1)
			return -1;
        *len += 3;
		return 1;
    }
	i = 0;
	address = (unsigned long long)ptr;
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
	if(ft_putstr_fd_2("0x", 1) == -1)
			return -1;
	*len += 2;
	while (i-- > 0)
	{
		hex[i] = ft_tolower(hex[i]);
		// ft_putchar_fd(hex[i], 1);
		if (ft_putchar_fd_2(hex[i], 1) == -1)
      		return -1;
		(*len)++;
	}
	return 1;
}

// int put_p(void *ptr, unsigned int *len)
// {
//     unsigned long long address;
//     char hex[20];
//     int i = 0;

//     if (ptr == NULL)
//     {
//         ft_putstr_fd("0x0", 1);
//         *len += 3;
//         return 1;
//     }

//     address = (unsigned long long)ptr;
//     if (address == 0)
//     {
//         ft_putstr_fd("0x0", 1);
//         *len += 3;
//         return 1;
//     }

//     while (address != 0)
//     {
//         int remainder = address % 16;
//         if (remainder < 10)
//             hex[i++] = (remainder + '0');
//         else
//             hex[i++] = (remainder - 10 + 'a');
//         address /= 16;
//     }
//     hex[i] = '\0';

//     ft_putstr_fd("0x", 1);
//     *len += 2;

//     while (i-- > 0)
//     {
//         if (ft_putchar_fd_2(hex[i], 1) == -1)
//             return -1;
//         (*len)++;
//     }
//     return 1;
// }