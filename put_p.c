#include "ft_printf.h"

static void	convert_to_hex(unsigned long long address, char *hex, int *len)
{
	int	i;
	int	remainder;

	i = 0;
	remainder = 0;
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
	*len = i;
}

static int	print_prefix(unsigned int *len)
{
	if (ft_putstr_fd_2("0x", 1) == -1)
		return (-1);
	*len += 2;
	return (1);
}

static int	print_hex(char *hex, int len, unsigned int *output_len)
{
	while (len-- > 0)
	{
		hex[len] = ft_tolower(hex[len]);
		if (ft_putchar_fd_2(hex[len], 1) == -1)
			return (-1);
		(*output_len)++;
	}
	return (1);
}

int	put_p(void *ptr, unsigned int *len)
{
	unsigned long long	address;
	char				hex[20];
	int					hex_len;

	if (ptr == NULL)
	{
		if (ft_putstr_fd_2("0x0", 1) == -1)
			return (-1);
		*len += 3;
		return (1);
	}
	address = (unsigned long long)ptr;
	convert_to_hex(address, hex, &hex_len);
	if (print_prefix(len) == -1)
		return (-1);
	if (print_hex(hex, hex_len, len) == -1)
		return (-1);
	return (1);
}

// int	put_p(void *ptr, unsigned int *len)
// {
// 	unsigned long long	address;
// 	char				hex[20];
// 	int					i;
// 	int					remainder;

// 	if (ptr == NULL)
// 	{
// 		if (ft_putstr_fd_2("0x0", 1) == -1)
// 			return (-1);
// 		*len += 3;
// 		return (1);
// 	}
// 	i = 0;
// 	address = (unsigned long long)ptr;
// 	if (address == 0)
// 		hex[i++] = '0';
// 	while (address != 0)
// 	{
// 		remainder = address % 16;
// 		if (remainder < 10)
// 			hex[i++] = (remainder + '0');
// 		else
// 			hex[i++] = (remainder - 10 + 'A');
// 		address /= 16;
// 	}
// 	hex[i] = '\0';
// 	if (ft_putstr_fd_2("0x", 1) == -1)
// 		return (-1);
// 	*len += 2;
// 	while (i-- > 0)
// 	{
// 		hex[i] = ft_tolower(hex[i]);
// 		if (ft_putchar_fd_2(hex[i], 1) == -1)
// 			return (-1);
// 		(*len)++;
// 	}
// 	return (1);
// }
