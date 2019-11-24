/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:41:50 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 18:53:52 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
**
** DESCRIPTION :
** The ft_memccpy function copies bytes from string src to string dst.  If the
** character c (as converted to an unsigned char) occurs in the string src, the
** copy stops and a pointer to the byte after the copy of c in the string dst is
** returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
** The source and destination strings should not overlap, as the behavior is
** undefined.
*/

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*s_dst;
	unsigned const char		*s_src;
	size_t					i;

	i = 0;
	s_dst = (unsigned char *)dst;
	s_src = (unsigned const char *)src;
	while (i < n)
	{
		if (*s_src == (unsigned char)c)
		{
			*s_dst++ = *s_src;
			return ((void *)s_dst);
		}
		*s_dst++ = *s_src++;
		i++;
	}
	return (NULL);
}
