/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:13:11 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:22:28 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strrchr(const char *str, int c)
**
** DESCRIPTION :
** The ft_strchr function locates the first occurrence of c (converted to a
** char) in the string pointed to by s.  The terminating null character is
** considered to  be part of the string. Therefore if c is '\0', the functions
** locate the terminating `\0'.
**
** RETURN VALUE :
** The functions ft_strchr returns a pointer to the located character, or NULL
** if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
