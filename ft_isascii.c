/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 23:16:43 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:18:09 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_isascii(int c)
**
** DESCRIPTION :
** The ft_isascii function tests for an ASCII character, which is any character
** between 0 and octal 0177 inclusive.
**
** RETURN VALUES :
** The ft_isascii function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}
