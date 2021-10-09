/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:47:28 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/26 15:47:29 by pcardoso         ###   ########.fr       */
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
