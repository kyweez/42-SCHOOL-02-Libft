/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 19:51:55 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 17:19:25 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
**
** DESCRIPTION :
** Iterates a list lst and applies the function f to each link to create a
** “fresh” list (using malloc(3)) resulting from the successive applications of
** f. If the allocation fails, the function returns NULL.
**
** RETURN VALUE :
** The new list.
**
** PARAMETER #1 :
** A pointer’s to the first link of a list.
**
** PARAMETER #2 :
** The address of a function to apply to each link of a list.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*function)(t_list *elem))
{
	t_list *templist;
	t_list *newlist;

	if (lst && function)
	{
		if (!(templist = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		templist = function(lst);
		newlist = templist;
		while ((lst = lst->next))
		{
			if (!(templist->next = (t_list *)malloc(sizeof(t_list))))
			{
				free(newlist);
				return (NULL);
			}
			templist->next = function(lst);
			templist = templist->next;
		}
		return (newlist);
	}
	return (NULL);
}
