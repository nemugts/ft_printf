#include "ft_printf.h"

int	analys(const char **format, va_list *args, /*t_list *flags,*/ unsigned int *len)
{
	if (**format == 'c')
	{
		if(put_c((char)va_arg(*args, int), len) == -1)
			return -1;
	}
	else if (**format == 's')
	{
		if(put_s(va_arg(*args, char *), len) == -1)
			return -1;
	}
	else if (**format == 'p')
	{
		if(put_p(va_arg(*args, void *), len) == -1)
		return -1;
	}
	else if (**format == 'd' || **format == 'i')
	{
		if(put_di(va_arg(*args, int), len) == -1)
		return -1;
	}
	else if (**format == 'u')
	{
		if(put_u(va_arg(*args, unsigned int), len) == -1)
		return -1;
	}
	else if (**format == 'x')
	{
		if(put_x(va_arg(*args, unsigned int), len) == -1)
		return -1;
	}
	else if (**format == 'X')
	{
		if(put_x2(va_arg(*args, unsigned int), len) == -1)
		return -1;
	}
	else if (**format == '%')
	{
		if(put_per(len) == -1)
			return (-1);
		// format++;
	}		
	return(1);
}

int ft_printf(const char *format, ...)
{
    unsigned int len = 0;
    va_list args;

    if (format == NULL)
        return -1;

    va_start(args, format);
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (analys(&format, &args, &len) == -1)
            {
                va_end(args);
                return -1;
            }
			format++;
        }
        else
        {
            if (ft_putchar_fd_2(*format, 1) == -1)
            {
                va_end(args);
                return -1;
            }
            len++;
            format++;
        }
    }
    va_end(args);
    return (int)len;
}

// int main()
// {
// 	int n = ft_printf("%p\n", "");
//     printf("%d\n", n);
// 	n = printf("%p\n", "");
//     printf("%d\n", n);
// }

// int	ft_printf(const char *format, ...)
// {
// 	unsigned int		len;
// 	va_list	args;
// 	size_t total_len = strlen(format);
// 	size_t i = 0;

// 	if (format == NULL)
// 		return (-1);
// 	len = 0;
// 	va_start(args, format);
// 	while (i <= total_len && total_len != 0)
// 	{
// 		if (*format == '%')
// 		{
// 			format++;
// 			analys(&format, &args, /*&flags,*/ &len);
// 		}
// 		else
// 		{
// 			ft_putchar_fd(*format, 1);
// 			len++;
// 		}
// 		i++;
// 	}
// 	va_end(args);
// 	return ((int)len);
// }

// int	main(void)
// {
// 	int az = 1;

// 	int n = ft_printf("");
//     printf("%d\n", n);
// 	n = printf("");
//     printf("%d\n", n);

// 	int c = ft_printf("%c\n", 'k');
//     printf("%d\n", c);
// 	c = printf("%c\n", 'k');
//     printf("%d\n", c);

// 	char *a = NULL;
// 	int s = ft_printf("%s\n", a);
//     printf("%d\n", s);
// 	s = printf("%s\n", a);
//     printf("%d\n", s);
	
// 	int p = ft_printf("%p\n", &az);
// 	printf("%d\n", p);
//     p = printf("%p\n", &az);
// 	printf("%d\n", p);

// 	int d = ft_printf("%d\n", 12);
//     printf("%d\n", d);
// 	d = printf("%d\n", 12);
//     printf("%d\n", d);

// 	int u = ft_printf("%u\n", -12);
//     printf("%d\n", u);
// 	u = printf("%u\n", -12);
//     printf("%d\n", u);

// 	int x = ft_printf("%x\n", -12);
//     printf("%d\n", x);
// 	x = printf("%x\n", -12);
//     printf("%d\n", x);

// 	int per = ft_printf("%%\n");
//     printf("%d\n", per);
// 	per = printf("%%\n");
//     printf("%d\n", per);
// }