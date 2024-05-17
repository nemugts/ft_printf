#include "ft_printf.h"

int	ft_putstr_fd_2(char *s, int fd)
{
	int	len;

	if (s == NULL)
		return (-1);
	len = ft_strlen(s);
	return (write(fd, s, len));
}
