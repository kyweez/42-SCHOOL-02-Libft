/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:08:11 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:55:12 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strmapi(const char *str, char (*function)(unsigned int, char))
**
** DESCRIPTION :
** Applies the function f to each character of the string passed as argument by
** giving its index as first argument to create a “fresh” new string (with
** malloc(3)) resulting from the successive applications of f.
**
** RETURN VALUES :
** The “fresh” string created from the successive applications of f.
**
** PARAM #1 :
** The string to map.
**
** PARAM #2 :
** The function to apply to each character of s and its index
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *str, char (*function)(unsigned int, char))
{
	char			*str_mapi;
	int				i;

	if (str && function)
	{
		if (!(str_mapi = ft_strnew(ft_strlen(str))))
			return (NULL);
		i = 0;
		while (str[i])
		{
			str_mapi[i] = function(i, str[i]);
			i++;
		}
		return (str_mapi);
	}
	return (NULL);
}
