#include "ft_printf.h"

char	*ft_strjoin_with_char(char *s1, char const s2)
{
	char	*ptr;
	int		c1;

	ptr = malloc((ft_strlen(s1) + 2) * (sizeof(char)));
	if (!(ptr))
		return (NULL);
	c1 = 0;
	ptr[0] = s2;
	while (s1[c1])
	{
		ptr[c1 + 1] = s1[c1];
		c1++;
	}
	ptr[c1 + 1] = '\0';
	free(s1);
	return (ptr);
}

// char	*ft_strjoin(char *s1, char const *s2)
// {
// 	char	*ptr;
// 	int		c1;
// 	int		c2;

// 	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
// 	if (!(ptr))
// 		return (NULL);
// 	c1 = 0;
// 	c2 = 0;
// 	while (s1[c1])
// 	{
// 		ptr[c1] = s1[c1];
// 		c1++;
// 	}
// 	while (s2[c2])
// 	{
// 		ptr[c1] = s2[c2];
// 		c1++;
// 		c2++;
// 	}
// 	ptr[c1] = '\0';
//	free(s1);
// 	return (ptr);
// }
