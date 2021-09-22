#include "ft_printf.h"

void	print_args(const char current_format, va_list arg, int *count)
{
	if (current_format == 'c')
		print_char(arg, count);
	if (current_format == 's')
		print_string(arg, count);
	if (current_format == 'p')
		print_pointer(arg, count);
	if (current_format == 'd')
		print_integer(arg, count);
	if (current_format == 'i')
		print_integer(arg, count);
	if (current_format == 'u')
		print_unsigned_integer(arg, count);
	if (current_format == 'x')
		print_hexadecimal(arg, 0, count);
	if (current_format == 'X')
		print_hexadecimal(arg, 1, count);
	if (current_format == '%')
	{
		write(1, "%", 1);
		*count = *count + 1;
	}
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	arg;

	va_start(arg, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			print_args(*format, arg, &count);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
