#include "ft_printf.h"

static char	*ulltoa(unsigned long long n)
{
	char				*str;
	int					len;
	unsigned long long	tmp;

	len = 0;
	tmp = n;
	if (n == 0)
		return (ft_strdup("0"));

	while (tmp > 0)
	{
		len++;
		tmp /= 10;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

int	put_u(unsigned int c, unsigned int *len)
{
	char			*str;
	unsigned int	i;
	unsigned int	a;

	str = ulltoa(c);
	if (str == NULL)
		return (-1);
	i = ft_strlen(str);
	a = 0;
	while (a < i)
	{
		if (ft_putchar_fd_2(str[a], 1) == -1)
		{
			free(str);
			return (-1);
		}
		a++;
		(*len)++;
	}
	free(str);
	return (1);
}
