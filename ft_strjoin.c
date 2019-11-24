/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:11:31 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:39:38 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strjoin(const char *str1, const char *str2)
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2. If the allocation fails the
** function returns NULL.
**
** RETURN VALUE :
** The “fresh” string result of the concatenation of the 2 strings.
**
** PARAMETER #1 :
** The prefix string.
**
** PARAMETER #2 :
** The suffix string.
*/

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*dst;
	size_t	len_dst;

	if (str1 && str2)
	{
		len_dst = ft_strlen(str1) + ft_strlen(str2);
		if (!(dst = ft_strnew(len_dst)))
			return (NULL);
		ft_strcpy(dst, str1);
		ft_strcat(dst, str2);
		return (dst);
	}
	return (NULL);
}
