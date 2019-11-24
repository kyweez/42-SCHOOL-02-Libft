/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:42:21 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:59:18 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strncat(char *str1, const char *str2, size_t n)
**
** DESCRIPTION :
** The ft_strncat functions append a copy of the null-terminated string s2 to
** the end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
** The ft_strncat function appends not more than n characters from s2, and then
** adds a terminating `\0'.
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** RETURN VALUES :
** The ft_strncat functions return the pointer s1.
*/

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (*str1)
		{
			str1++;
			i++;
		}
		while (*str2 && n > 0)
		{
			*str1++ = *str2++;
			n--;
			i++;
		}
		*str1 = '\0';
	}
	return (str1 - i);
}
