/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:22:04 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:28:43 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
**
** DESCRIPTION :
** Takes as a parameter the adress of a pointer to a link and frees the memory
** of this link and every successors of that link using the functions del and
** free(3).
** Finally the pointer to the link that was just freed must be set to NULL.
**
** PARAMETER #1 :
** The adress of a pointer to a link that needs to be freed.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp_list;

	if (!alst)
		return ;
	while (*alst)
	{
		tmp_list = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = tmp_list;
	}
}
