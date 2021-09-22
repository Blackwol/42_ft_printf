#include "ft_printf.h"

char	*convert(unsigned long long int num, int base, int capital_letters)
{
	char					*representation;
	char					*ptr;
	int						remainder;
	unsigned long long int	nbr;

	if (capital_letters)
		representation = ft_strdup("0123456789ABCDEF");
	else
		representation = ft_strdup("0123456789abcdef");
	ptr = ft_strdup("");
	if (!(ptr))
		return (NULL);
	nbr = num;
	if (nbr == 0)
		ptr = ft_strjoin_with_char(ptr, representation[0]);
	while (nbr > 0)
	{
		remainder = nbr % base;
		ptr = ft_strjoin_with_char(ptr, representation[remainder]);
		nbr = nbr / base;
	}
	free(representation);
	return (ptr);
}
