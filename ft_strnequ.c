/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:58:17 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:15:42 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_strnequ(const char *str1, const char *str2, size_t n)
**
** DESCRIPTION :
** Lexicographical comparison between s1 and s2 up to n characters or until a
** '\0' is reached. If the 2 strings are identical, the function returns 1, or 0
** otherwise.
**
** RETURN VALUES :
** 1 or 0 according to if the 2 strings are identical or not.
**
** PARAMETER #1 :
** The first string to be compared.
**
** PARAMETER #2 :
** The second string to be compared..
**
** PARAMETER #3 :
** The ft_strncat functions return the pointer s1.
*/

#include "libft.h"

int		ft_strnequ(const char *str1, const char *str2, size_t n)
{
	if (str1 && str2)
	{
		return (ft_strncmp(str1, str2, n) == 0 ? 1 : 0);
	}
	return (0);
}
