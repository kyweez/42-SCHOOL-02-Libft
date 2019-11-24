/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 00:43:04 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:26:50 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_toupper(int c)
**
** DESCRIPTION :
** The ft_toupper function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned char or
** the value of EOF.
**
** RETURN VALUE :
** If the argument is a lower-case letter, the ft_toupper function returns the
** corresponding upper-case letter if there is one; otherwise, the argument is
** returned unchanged.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
