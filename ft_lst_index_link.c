/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_index_link.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 23:41:43 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:55:56 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** t_list	*ft_lst_index_link(t_list *lst, size_t index)
**
** DESCRIPTION :
** The function ft_lst_index_link takes a list as parameter and an index and
** return the adress of the link placed at the index of the list.
** If the number of links contained in the list is lower than the index given,
** the function returns NULL.
*/

#include "libft.h"

t_list	*ft_lst_index_link(t_list *lst, size_t index)
{
	t_list	*tmp;
	size_t	list_len;

	list_len = ft_lst_count_link(lst);
	if (list_len <= index)
		return (NULL);
	if (lst)
	{
		if (!index)
			return (lst);
		tmp = lst;
		while (index && lst)
		{
			lst = lst->next;
			if (lst)
				tmp = tmp->next;
			index--;
		}
		return (tmp);
	}
	return (NULL);
}
