/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:31:04 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:17:55 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char			*ft_strtrim(const char *str)
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters '(space)' ; '\n'
** and '\t'.
** If str has no whitespaces at the beginning or at the end, the function
** returns a copy of str. If the allocation fails the function returns NULL.
**
** RETURN VALUE :
** The “fresh” trimmed string or a copy of str.
**
** PARAMETER #1 :
** The string to be trimed.
*/

#include "libft.h"

static size_t	ft_len_to_malloc(const char *str, size_t *k)
{
	size_t	i;
	size_t	j;

	if (!*str)
		return (0);
	i = 0;
	j = ft_strlen(str);
	while (ft_char_to_skip(&str[i], " \n\t"))
	{
		i++;
		*k = i;
		if (!str[i])
			return (0);
	}
	while (ft_char_to_skip(&str[j - 1], " \n\t"))
		j--;
	return (j - i);
}

char			*ft_strtrim(const char *str)
{
	size_t	i;
	char	*trimmed_string;
	size_t	len;

	i = 0;
	if (str)
	{
		len = ft_len_to_malloc((char *)str, &i);
		if (!(trimmed_string = ft_strnew(len)))
			return (NULL);
		if (*str)
		{
			str = str + i;
			ft_strncpy(trimmed_string, str, len);
		}
		return (trimmed_string);
	}
	return (NULL);
}
