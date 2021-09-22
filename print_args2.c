/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:04:33 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/22 19:04:34 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_unsigned_integer(va_list arg, int *count)
{
	long	l;

	l = va_arg(arg, int);
	if (l < 0)
		l = l + 4294967296;
	ft_putunbr(l, count);
}
