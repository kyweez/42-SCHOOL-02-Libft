/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_newlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 11:30:13 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 17:00:53 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_dlist	*ft_dlst_newlist(void *content, size_t content_size)
{
	t_dlist	*new;

	if (!(new = (t_dlist *)malloc(sizeof(t_dlist))))
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	if (!content || !content_size)
	{
		new->content = NULL;
		new->content_size = 0;
		return (new);
	}
	if (!(new->content = malloc(content_size)))
	{
		free(new);
		return (NULL);
	}
	new->content = ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	return (new);
}
