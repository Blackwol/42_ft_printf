/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso </var/mail/pcardoso>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:48:51 by pcardoso          #+#    #+#             */
/*   Updated: 2021/09/26 15:48:53 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
