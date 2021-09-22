/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:59:50 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/22 19:24:31 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(va_list arg, int *count)
{
	char	c;

	c = va_arg(arg, int);
	ft_putchar(c, count);
}

void	print_string(va_list arg, int *count)
{
	char	*string;

	string = va_arg(arg, char *);
	if (string == NULL)
	{
		write(1, "(null)", 6);
		*count = *count + 6;
		return ;
	}
	while (*string)
	{
		write(1, string, 1);
		*count = *count + 1;
		string++;
	}
}

void	print_hexadecimal(va_list arg, int capital_letters, int *count)
{
	int				i;
	char			*ptr;
	unsigned int	unsi_int;

	unsi_int = 0;
	i = va_arg(arg, int);
	if (i < 0)
	{
		unsi_int = i;
		ptr = convert(unsi_int, 16, capital_letters);
	}
	else
	{
		ptr = convert(i, 16, capital_letters);
	}
	ft_putstr(ptr, count);
	free(ptr);
}

void	print_integer(va_list arg, int *count)
{
	int	i;

	i = va_arg(arg, int);
	ft_putnbr(i, count);
}

void	print_pointer(va_list arg, int *count)
{
	unsigned long long int	ptr;
	char					*result;

	ptr = (unsigned long long int)va_arg(arg, void *);
	write(1, "0x", 2);
	*count = *count + 2;
	result = convert(ptr, 16, 0);
	ft_putstr(result, count);
	free(result);
}
