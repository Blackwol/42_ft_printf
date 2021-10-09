/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:49:00 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/26 15:49:02 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
