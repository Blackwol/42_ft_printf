#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		c;

	c = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (c + 1));
	if (!(ptr))
		return (NULL);
	while (c >= 0)
	{
		ptr[c] = (char)s1[c];
		c--;
	}
	return (ptr);
}
