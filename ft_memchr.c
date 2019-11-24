/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 11:54:55 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:29:46 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	*ft_memchr(const void *str, int c, size_t n)
**
** DESCRIPTION :
** The ft_memchr function locates the first occurrence of c (converted to an
** unsigned char) in string s.
**
** RETURN VALUE :
** The ft_memchr function returns a pointer to the byte located, or NULL if no
** such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char *s_str;

	s_str = (unsigned const char *)str;
	while (n > 0)
	{
		if (*s_str == (unsigned char)c)
			return ((void *)s_str);
		s_str++;
		n--;
	}
	return (NULL);
}
