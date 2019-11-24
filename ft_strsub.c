/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:44:42 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:52:27 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strsub(const char *str, unsigned int start, size_t len)
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns a “fresh” substring from the string
** given as argument. The substring begins at index start and is of size len.
** If start and len aren’t refering to a valid substring, the behavior is
** undefined. If the allocation fails, the function returns NULL.
**
** RETURN VALUE :
** The substring.
**
** PARAMETER #1 :
** The string from which create the substring.
**
** PARAMETER #2 :
** The start index of the substring.
**
** PARAMETER #3 :
** The size of the substring.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*trunk;
	int		i;

	i = 0;
	if (str)
	{
		if (!(trunk = ft_strnew(len)))
			return (NULL);
		while (len--)
		{
			*trunk = str[start];
			trunk++;
			start++;
			i++;
		}
		return (trunk - i);
	}
	return (NULL);
}
