#ifndef FT_PRINTF_H
# define FT_PRINTF_H


# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_flag
{
	int	minus;
	int	zero;
	int	plus;
	int	space;
	int	shape;
	int	field;
	int	accur;
}	t_flag;

int	ft_printf(const char *format, ...);
int	ft_putchar_fd_2(char c, int fd);
int	put_c(char c, unsigned int *len);
int	put_s(char *c, unsigned int *len);
int	put_p(void *ptr, unsigned int *len);
int	put_di(int c, unsigned int *len);
int	put_u(unsigned int c, unsigned int *len);
int	put_x(unsigned int c, unsigned int *len);
int	put_x2(unsigned int c, unsigned int *len);
int	put_per(unsigned int *len);
int	ft_putstr_fd_2(char *s, int fd);

#endif
