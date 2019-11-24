/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:51:59 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:20:31 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_islower(int c)
**
** DESCRIPTION :
** The ft_islower function tests for any lower-case letters.  The value of the
** argument must be representable as an unsigned char or the value of EOF.
**
** RETURN VALUES :
** The ft_islower function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
