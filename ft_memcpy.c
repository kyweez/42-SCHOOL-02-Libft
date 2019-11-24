/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:00:20 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:30:13 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void *ft_memcpy(void *dst, const void *src, size_t n)
**
** DESCRIPTION :
** The ft_memcpy function copies n bytes from memory area src to memory area dst
** If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use ft_memmove instead
**
** RETURN VALUE :
** The ft_memcpy function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *s_dst;
	unsigned char *s_src;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (n == 0)
		return (dst);
	while (n > 0)
	{
		*s_dst = *s_src;
		n--;
		s_dst++;
		s_src++;
	}
	return (dst);
}
