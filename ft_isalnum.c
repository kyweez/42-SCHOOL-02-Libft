/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 22:58:44 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:18:12 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int	ft_isalnum(int c)
**
** DESCRIPTION :
** The ft_isalnum function tests for any character for which ft_isalpha or
** ft_isdigit is true. The value of the argument must be representable as an
** unsigned char or the value of EOF.
**
** RETURN VALUES :
** The ft_isalnum function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
