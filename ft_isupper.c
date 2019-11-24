/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:52:02 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:35:12 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_isupper(int c)
**
** DESCRIPTION :
** The ft_isupper function tests for any upper-case letter. The value of the
** argument must be representable as an unsigned char or the value of EOF.
**
** RETURN VALUES :
** The ft_isupper function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
