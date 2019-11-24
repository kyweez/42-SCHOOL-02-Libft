/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:16:07 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 19:38:00 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** t_list	*ft_lst_pushback(t_list *alst, const void *content,
** size_t content_size)
**
** DESCRIPTION :
** Allocates with malloc(3) (ft_lstnew) adds a “fresh” link at to the end of a
** list. The function return the address of the first link.
**
** PARAM #1 :
** The list to witch we add the new link.
**
** PARAM #2 :
** The content of the new link.
**
** PARAM #3 :
** The size of the content of the new link.
**
** RETURN VALUE :
** The address of the first link of the list.
*/

#include "libft.h"

t_list	*ft_lst_pushback(t_list *alst, const void *content, size_t content_size)
{
	t_list *lastlink;
	t_list *newlink;

	lastlink = ft_lst_last_link(alst);
	if (alst)
	{
		newlink = ft_lstnew(content, content_size);
		lastlink->next = newlink;
		return (alst);
	}
	return (NULL);
}
