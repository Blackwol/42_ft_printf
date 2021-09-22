#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	write(1, s, ft_strlen(s));
	*count = *count + ft_strlen(s);
}
