#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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

#include <stdarg.h>
#include "libft/libft.h"

void put_c(char c, int *len);
void put_s(char *c, int *len);
void put_p(void *ptr,int *len);
void put_di(int	c, int *len);
void put_u(unsigned int c, int *len);
void put_x(unsigned int c, int *len);

#endif