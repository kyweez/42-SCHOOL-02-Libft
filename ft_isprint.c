/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 00:15:12 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:22:21 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_isprint(int c)
**
** DESCRIPTION :
** The ft_isprint function tests for any printing character, including space.
** The value of the argument must be representable as an unsigned char or the
** value of EOF.
**
** RETURN VALUES :
** The ft_isprint function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
