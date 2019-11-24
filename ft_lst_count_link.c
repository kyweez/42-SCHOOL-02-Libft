/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_count_link.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 12:32:36 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:55:58 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** size_t		ft_lst_count_link(t_list *lst)
**
** DESCRIPTION :
** The fucntion ft_lst_count_link counts the number of links in the list given
** as parameter.
**
** RETURN VALUE:
** The number of link counted.
**
** PARAMETER #1 :
** A list.
*/

#include "libft.h"

size_t		ft_lst_count_link(t_list *lst)
{
	size_t	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
