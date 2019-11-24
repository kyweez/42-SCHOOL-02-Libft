/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:54:12 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:27 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_memdel(void **ptr_to_free)
**
** DESCRIPTION :
** Takes a pointer address as a parameter. The function frees the memory area
** that needs to be freed, then puts the pointer to NULL.
**
** PARAMETER #1 :
** A pointer’s address that needs its memory freed and set to NULL.
*/

#include <stdlib.h>

void	ft_memdel(void **ptr_to_free)
{
	if (ptr_to_free && *ptr_to_free)
	{
		free(*ptr_to_free);
		*ptr_to_free = NULL;
	}
	return ;
}
