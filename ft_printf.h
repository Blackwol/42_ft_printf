/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:47:09 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/26 15:47:14 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
void	print_char(va_list arg, int *count);
void	print_string(va_list arg, int *count);
void	print_integer(va_list arg, int *count);
char	*convert(unsigned long long int num, int base, int capital_letters);
void	print_hexadecimal(va_list arg, int capital_letters, int *count);
void	print_unsigned_integer(va_list arg, int *count);
void	print_pointer(va_list arg, int *count);

#endif
