/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:43:08 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 19:08:50 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
**
** DESCRIPTION :
**  The ft_strnstr function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched.
** Characters that appear after a `\0' character are not searched.  Since the
** ft_strnstr function is a FreeBSD specific API, it should only be used when
** portability is not a concern.
**
** RETURN VALUES :
** If needle is an empty string, haystack is returned.
** If needle occurs nowhere in haystack, NULL is returned.
** Otherwise a pointer to the first character of the first occurrence of needle
** is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (n > 0 && *haystack && (ft_strlen(needle) - 1) < n)
	{
		if (*haystack == *needle)
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
