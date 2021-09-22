/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:04:08 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/22 19:04:10 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_strlen(const char *s);
void	print_char(va_list arg, int *count);
void	print_string(va_list arg, int *count);
void	print_integer(va_list arg, int *count);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int n, int *count);
char	*convert(unsigned long long int num, int base, int capital_letters);
void	ft_putstr(char *s, int *count);
char	*ft_strjoin_with_char(char *s1, char const s2);
char	*ft_strdup(const char *s1);
void	print_hexadecimal(va_list arg, int capital_letters, int *count);
void	print_unsigned_integer(va_list arg, int *count);
int		ft_isalpha(int c);
void	print_pointer(va_list arg, int *count);
void	ft_putunbr(long n, int *c);

#endif
