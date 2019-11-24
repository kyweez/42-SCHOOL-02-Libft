/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:54:50 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:16:19 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** size_t	ft_countword(const char *src, const char *to_skip)
**
** DESCRIPTION :
** The function takes a string of characters and returns the number of words.
** Words are strings of characters separated by one or few delimiters send in
** the string of characters placed in parameter 2.
**
** RETURN VALUES :
** The number of words.
*/

#include "libft.h"

size_t	ft_countword(const char *src, const char *to_skip)
{
	size_t count;

	count = 0;
	if (src && to_skip)
	{
		while (*src)
		{
			if (ft_char_to_skip(src, to_skip))
				src++;
			else
			{
				count++;
				while (!ft_char_to_skip(src, to_skip) && *src)
					src++;
			}
		}
		return (count);
	}
	return (0);
}
