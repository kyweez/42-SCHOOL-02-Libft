/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:18:36 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:35:16 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_issign(int c)
**
** DESCRIPTION :
** The ft_issign function tests if a character is a '+' or a '-'.
**
** RETURN VALUES :
** The ft_issign function returns zero if the character tests false and
** returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_issign(int c)
{
	return (c == 43 || c == 45);
}
