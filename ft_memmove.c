/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:39:37 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 19:37:51 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	*ft_memmove(void *dst, const void *src, size_t len)
**
** DESCRIPTION :
** The ft_memmove function copies len bytes from string src to string dst.  The
** two strings may overlap; the copy is always done in a non-destructive manner.
**
** RETURN VALUES :
** The ft_memmove function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s_src;
	unsigned char *s_dst;

	s_src = (unsigned char *)src;
	s_dst = (unsigned char *)dst;
	if (s_src == s_dst)
		return (dst);
	if (s_src > s_dst)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		*(s_dst + len - 1) = *(s_src + len - 1);
		len--;
	}
	return (dst);
}
