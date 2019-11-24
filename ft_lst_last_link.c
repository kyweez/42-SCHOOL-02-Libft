/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last_link.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 22:58:01 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:55:54 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** t_list	*ft_lst_last_link(t_list *lst)
**
** DESCRIPTION :
** The function ft_lst_last_link takes a list as parameter and returns the
** adress of the last link of the list.
*/

#include "libft.h"

t_list	*ft_lst_last_link(t_list *lst)
{
	t_list *tmp;

	if (lst)
	{
		tmp = lst;
		while (lst)
		{
			lst = lst->next;
			if (lst)
				tmp = tmp->next;
		}
		return (tmp);
	}
	return (NULL);
}
