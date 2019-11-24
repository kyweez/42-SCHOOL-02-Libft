/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:02:59 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:07:28 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putendl(const char *str)
**
** DESCRIPTION :
** Outputs the string s to the standard output followed by a '\n'.
**
** PARAMETER #1 :
** The string to output.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl(const char *str)
{
	if (str)
	{
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
	}
}
