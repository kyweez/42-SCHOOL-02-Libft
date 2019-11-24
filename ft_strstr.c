/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 23:12:59 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:46:41 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strstr(const char *haystack, const char *needle)
**
** DESCRIPTION :
** The ft_strstr function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
**
** RETURN VALUE :
** If needle is an empty string, haystack is returned.
** If needle occurs nowhere in haystack, NULL is returned.
** Otherwise a pointer to the first character of the first occurrence of needle
** is returned.
**
** PARAMETER #1 :
** The haystack (Meule de foin)
**
** PARAMETER #2 :
** The needle (Aiguille)
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
