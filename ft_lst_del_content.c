/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 12:32:36 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 17:17:19 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_lst_del_content(void *link_content, size_t link_content_size)
**
** DESCRIPTION :
** Sets the content of a link to NULL and frees it. Then, the function sets the
** content_size to 0.
**
** PARAM #1 :
** The content of the link.
**
** PARAM #2 :
** The content_size of the link.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lst_del_content(void *link_content, size_t link_content_size)
{
	char	*temp;

	temp = (char *)link_content;
	ft_strdel(&temp);
	(void)link_content_size;
}
