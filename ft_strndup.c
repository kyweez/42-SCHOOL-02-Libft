/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:22:12 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:08:00 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strndup(const char *src, size_t n)
**
** DESCRIPTION :
** The strndup() function copies at most n characters from the string s1 always
** NUL terminating the copied string.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *src, size_t n)
{
	char	*dst;
	int		i;
	size_t	len;

	len = ft_strlen(src);
	if (n > len)
	{
		if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	else
	{
		if (!(dst = (char *)malloc(sizeof(char) * (n + 1))))
			return (NULL);
	}
	i = 0;
	while (*src && n)
	{
		*dst++ = *src++;
		n--;
		i++;
	}
	*dst = '\0';
	return (dst - i);
}
