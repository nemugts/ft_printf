#include "ft_printf.h"
# include "libft/libft.h"

// int	get_len()
// {
	
// }

void	print_str(const char **format)
{
	// *len = 0;
	while (format != NULL)
	{
		write(1, &format, 1);
	}
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	if (format == NULL)
		return (-1);
	len = 0;
	va_start(args, format);
	while (!format)
	{
		// if (*format == '%')
		// 	analysis(&format, args, &flags, &len);
		// else
			print_str(&format);

	}
	va_end(args);
	return (len);
}

int	main(void)
{
    ft_printf("32\n");
    printf("32\\0\n");
}