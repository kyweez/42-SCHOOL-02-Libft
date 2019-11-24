/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:11:02 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:26:55 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** size_t	ft_strlen(const char *str)
**
** DESCRIPTION :
** The ft_strlen function computes the length of the string s.
**
** RETURN VALUES :
** The ft_strlen function returns the number of characters that precede the
** terminating NUL character.
**
** PARAM #1 :
** The char string to computes length.
*/

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *str)
{
	unsigned int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
