/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:40:32 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:06 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_strdel(char **str)
**
** DESCRIPTION :
** Takes as a parameter the address of a string that need to be freed with
** free(3), then sets its pointer to NULL.
**
** PARAMETER #1 :
** The string’s address that needs to be freed and its pointer set to NULL.
*/

#include <stdlib.h>

void	ft_strdel(char **str)
{
	if (str)
	{
		free(*str);
		*str = NULL;
	}
}
