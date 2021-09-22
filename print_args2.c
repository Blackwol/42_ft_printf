#include "ft_printf.h"

void	print_unsigned_integer(va_list arg, int *count)
{
	long	l;

	l = va_arg(arg, int);
	if (l < 0)
		l = l + 4294967296;
	ft_putunbr(l, count);
}
