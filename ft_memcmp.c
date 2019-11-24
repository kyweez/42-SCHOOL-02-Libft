/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:57:44 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:30:01 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_memcmp(const void *str1, const void *str2, size_t n)
**
** DESCRIPTION :
** The ft_memcmp function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
**
** RETURN VALUE :
** The ft_memcmp function returns zero if the two strings are identical,
** otherwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0', for
** example).  Zero-length strings are always identical.  This behavior is not
** required by C and portable code should only depend on the sign of the
** returned value.
*/

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s_str1;
	unsigned char *s_str2;

	s_str1 = (unsigned char *)str1;
	s_str2 = (unsigned char *)str2;
	while (n > 0)
	{
		if (*s_str1 != *s_str2)
			return (*s_str1 - *s_str2);
		s_str1++;
		s_str2++;
		n--;
	}
	return (0);
}
