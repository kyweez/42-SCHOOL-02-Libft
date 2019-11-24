/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 11:47:32 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 17:26:00 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	*ft_memalloc(size_t size)
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
** allocated is initialized to 0. If the allocation fails, the function returns
** NULL.
**
** RETURN VALUE :
** The allocated memory area.
**
** PARAMETER #1 :
** The size of the memory that needs to be allocated.
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem_area;

	if (!(mem_area = malloc(size)))
		return (NULL);
	ft_bzero(mem_area, size);
	return (mem_area);
}
