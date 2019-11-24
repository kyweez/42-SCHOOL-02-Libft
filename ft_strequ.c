/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 09:50:13 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:32:00 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_strequ(const char *str1, const char *str2)
**
** DESCRIPTION :
** Lexicographical comparison between s1 and s2. If the 2 strings are identical
** the function returns 1, or 0 otherwise.
**
** RETURN VALUE :
** 1 or 0 according to if the 2 strings are identical or not.
**
** PARAMETER #1 :
** The first string to be compared.
**
** PARAMETER #2 :
** The second string to be compared.
*/

#include "libft.h"

int		ft_strequ(const char *str1, const char *str2)
{
	if (str1 && str2)
		return (ft_strcmp(str1, str2) == 0 ? 1 : 0);
	return (0);
}
