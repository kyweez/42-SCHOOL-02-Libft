/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 01:03:44 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:07:01 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_tolower(int c)
**
** DESCRIPTION :
** The ft_tolower function converts an upper-case letter to the corresponding
** lower-case letter.  The argument must be representable as an unsigned char or
** the value of EOF.
**
** RETURN VALUE :
** If the argument is an upper-case letter, the ft_tolower function returns the
** corresponding lower-case letter if there is one; otherwise, the argument is
** returned unchanged.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
