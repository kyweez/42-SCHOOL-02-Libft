/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:49:14 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:21:57 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putstr(const char *str)
**
** DESCRIPTION :
** Outputs the string s to the standard output.
**
** PARAMETER #1 :
** The string to output.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr(const char *str)
{
	if (str)
		write(1, str, ft_strlen(str));
}
