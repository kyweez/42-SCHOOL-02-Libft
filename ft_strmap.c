/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:18:16 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:53:22 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strmap(const char *str, char (*function)(char))
**
** DESCRIPTION :
** Applies the function f to each character of the string given as argument to
** create a “fresh” new string (with malloc(3)) resulting from the successive
** applications of f.
**
** RETURN VALUES :
** The “fresh” string created from the successive applications of f.
**
** PARAM #1 :
** The string to map.
**
** PARAM #2 :
** The function to apply to each character of str.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(const char *str, char (*function)(char))
{
	char	*str_map;
	int		i;

	if (str && function)
	{
		if (!(str_map = ft_strnew(ft_strlen(str))))
			return (NULL);
		i = 0;
		while (str[i])
		{
			str_map[i] = function(str[i]);
			i++;
		}
		return (str_map);
	}
	return (NULL);
}
