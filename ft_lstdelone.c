/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:10:46 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:28:55 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
**
** DESCRIPTION :
** Takes as a parameter a link’s pointer address and frees the memory of the
** link’s content using the function "del" given as a parameter, then frees the
** link’s memory using free(3). The memory of next must not be freed under any
** circumstance.
** Finally, the pointer to the link that was just freed must be set to NULL.
**
** PARAMETER #1 :
** The adress of a pointer to a link that needs to be freed.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
