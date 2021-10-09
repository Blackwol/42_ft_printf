/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:48:31 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/26 15:48:33 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenint(long x)
{
	long	n;
	int		c;

	n = x;
	c = 0;
	if (n == 0)
		c++;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static char	*ft_reverse(char *s)
{
	int		count_start;
	int		count_end;
	char	aux;

	count_start = 0;
	count_end = ft_strlen(s) - 1;
	while (count_start < count_end)
	{
		aux = s[count_start];
		s[count_start++] = s[count_end];
		s[count_end--] = aux;
	}
	return (s);
}

void	ft_putnbr(int n, int *c)
{
	char	*ptr;
	long	n_long;
	int		count;
	int		nbr_count;
	char	*result;

	count = 0;
	n_long = n;
	nbr_count = lenint(n_long);
	ptr = malloc(lenint(n) + 2 * sizeof(char));
	if (n_long < 0)
		n_long = n_long * -1;
	while (nbr_count-- > 0)
	{
		ptr[count++] = (n_long % 10) + 48;
		n_long = n_long / 10;
	}
	if (n < 0)
		ptr[count++] = '-';
	ptr[count] = '\0';
	result = ft_reverse(ptr);
	write(1, result, ft_strlen(ptr));
	*c = *c + ft_strlen(ptr);
	free(ptr);
}

void	ft_putunbr(long n, int *c)
{
	char	*ptr;
	long	n_long;
	int		count;
	int		nbr_count;
	char	*result;

	count = 0;
	n_long = n;
	nbr_count = lenint(n_long);
	ptr = malloc(lenint(n) + 2 * sizeof(char));
	while (nbr_count-- > 0)
	{
		ptr[count++] = (n_long % 10) + 48;
		n_long = n_long / 10;
	}
	if (n < 0)
		ptr[count++] = '-';
	ptr[count] = '\0';
	result = ft_reverse(ptr);
	write(1, result, ft_strlen(ptr));
	*c = *c + ft_strlen(ptr);
	free(ptr);
}
