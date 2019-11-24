/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:32:57 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:29:11 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_lstiter(t_list *lst, void (*function)(t_list *link))
**
** DESCRIPTION :
** Iterates the list lst and applies the function f to each link.
**
** PARAMETER #1 :
** A pointer to the first link of a list.
**
** PARAMETER #2 :
** The address of a function to apply to each link of a list.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*function)(t_list *link))
{
	if (lst && function)
	{
		while (lst)
		{
			function(lst);
			lst = lst->next;
		}
	}
}
