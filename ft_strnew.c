/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:00:53 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:15:40 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_strnequ(const char *str1, const char *str2, size_t n)
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns a “fresh” string ending with '\0'.
** Each character of the string is initialized at '\0'. If the allocation fails
** the function returns NULL.
**
** RETURN VALUES :
** The string allocated and initialized to 0.
**
** PARAMETER #1 :
** The size of the string to be allocated.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str_new;

	if (!(str_new = (char *)ft_memalloc(sizeof(char) * (size + 1))))
		return (NULL);
	return (str_new);
}
