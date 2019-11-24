/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:47:48 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:18:10 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int	ft_isalpha(int c)
**
** DESCRIPTION :
** The ft_isalpha function tests for any character for which ft_isupper or
** ft_islower is true. The value of the argument must be representable as an
** unsigned char or the value of EOF.
**
** RETURN VALUES :
** The ft_isalpha function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
