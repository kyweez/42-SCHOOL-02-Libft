/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:34:05 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 18:38:04 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** t_list * ft_lstnew(void const *content, size_t content_size);
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns a “fresh” link. The variables content
** and content_size of the new link are initialized by copy of the parameters
** of the function. If the parameter content is nul, the variable content is
** initialized to NULL and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t. The variable next is initialized to
** NULL. If the allocation fails, the function returns NULL.
**
** PARAMETER #1 :
** The content to put in the new link.
**
** PARAMETER #2 :
** The size of the content of the new link.
**
** RETURN VALUE :
** The new link.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list *newlist;

	if (!(newlist = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	newlist->next = NULL;
	if (content == NULL || !content_size)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
		return (newlist);
	}
	if (!(newlist->content = malloc(content_size)))
	{
		free(newlist);
		return (NULL);
	}
	newlist->content_size = content_size;
	newlist->content = ft_memcpy(newlist->content, content, content_size);
	return (newlist);
}
