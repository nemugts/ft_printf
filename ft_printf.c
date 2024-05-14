#include "ft_printf.h"

void	analys(const char **format, va_list *args, /*t_list *flags,*/ int *len)
{
	if (**format == 'c')
		put_c((char)va_arg(*args, int), len);
	else if (**format == 's')
		put_s(va_arg(*args, char *), len);
	else if (**format == 'p')
		put_p(va_arg(*args, void *), len);
	else if (**format == 'd' || **format == 'i')
		put_di(va_arg(*args, int), len);
	else if (**format == 'u')
		put_u(va_arg(*args, unsigned int), len);
	else if (**format == 'x')
		put_x(va_arg(*args, unsigned int), len);
	else if (**format == 'X')
		put_x2(va_arg(*args, unsigned int), len);
	else if (**format == '%')
		put_per(len);
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

// int	main(void)
// {
	// int az = 1;

	// int c = ft_printf("%c\n", 'k');
    // printf("%d\n", c);
	// c = printf("%c\n", 'k');
    // printf("%d\n", c);

	// char *a = NULL;
	// int s = ft_printf("%s\n", a);
    // printf("%d\n", s);
	// s = printf("%s\n", a);
    // printf("%d\n", s);
	
	// int p = ft_printf("%p\n", &az);
	// printf("%d\n", p);
    // p = printf("%p\n", &az);
	// printf("%d\n", p);

	// int d = ft_printf("%d\n", 12);
    // printf("%d\n", d);
	// d = printf("%d\n", 12);
    // printf("%d\n", d);

	// int u = ft_printf("%u\n", -12);
    // printf("%d\n", u);
	// u = printf("%u\n", -12);
    // printf("%d\n", u);

	// int x = ft_printf("%x\n", -12);
    // printf("%d\n", x);
	// x = printf("%x\n", -12);
    // printf("%d\n", x);

// 	int per = ft_printf("%%\n");
//     printf("%d\n", per);
// 	per = printf("%%\n");
//     printf("%d\n", per);
// }