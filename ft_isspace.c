/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:04:41 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:35:15 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_isspace(int c)
**
** DESCRIPTION :
** The ft_isspace function tests for the white-space characters. For any locale,
** this includes the following standard characters:
** '\t' '\n' '\r' '\v' '\f' ' '
** In the "C" locale, ft_isspace successful test is limited to these characters
** only.
** The value of the argument must be representable as an unsigned char or the
** value of EOF.
**
** RETURN VALUES :
** The ft_isspace function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
