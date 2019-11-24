/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlendelim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 10:59:01 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:50:56 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** size_t		ft_strlendelim(const char *src, const char *str)
**
** DESCRIPTION :
** The ft_strlendelim function computes the length of the string src until the
** delimiter included in the string str given as parameter #2.
**
** RETURN VALUES :
** The ft_strlen function returns the number of characters that precede the
** terminating NUL character or the number of characarers skipped before an
** matching with one of the char inside str.
**
** PARAM #1 :
** The char string src.
**
** PARAM #2 :
** The char string with the characarers looked for.
*/

#include "libft.h"

size_t		ft_strlendelim(const char *src, const char *str)
{
	size_t	len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	if (src && str)
	{
		while (src[i])
		{
			j = 0;
			while (str[j])
			{
				if (src[i] == str[j])
					return (len);
				j++;
			}
			len++;
			i++;
		}
		return (len);
	}
	return (0);
}
