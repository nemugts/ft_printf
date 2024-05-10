#include "ft_printf.h"

void	analys(const char **format, va_list *args, /*t_list *flags,*/ int *len)
{
	if (**format == 'c')
		put_c((char)va_arg(*args, int), len);
	else if (**format == 's')
		put_s(va_arg(*args, char *), len);
	else if (**format == 'p')
		put_p(va_arg(*args, void *), len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;
	// t_list	flags;

	if (format == NULL)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			analys(&format, &args, /*&flags,*/ &len);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	int a = 1;
    ft_printf("%c\n", 'k');
    ft_printf("%s\n", "kjhgfdsa");
    ft_printf("%p\n", &a);
    printf("%p\n", &a);
}