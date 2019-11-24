/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:24:04 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:47:51 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_strclr(char *str)
**
** DESCRIPTION :
** The ft_memset function writes len bytes of value c (converted to an unsigned
** char) to the string b.
**
** RETURN VALUE :
** The ft_memset function returns its first argument.
*/

#include "libft.h"

void	ft_strclr(char *str)
{
	if (str)
		ft_memset(str, 0, ft_strlen(str));
}
