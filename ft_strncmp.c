/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:13:53 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:02:47 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int			ft_strncmp(const char *str1, const char *str2, size_t n)
**
** DESCRIPTION :
** The ft_strncmp function lexicographically compare the null-terminated strings
** s1 and s2.
** The ft_strncmp function compares not more than n characters.
** Because ft_strncmp is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
**
** RETURN VALUES :
** The ft_strncmp function returns an integer greater than, equal to, or less
** than 0, according as the string s1 is greater than, equal to, or less than
** the string s2.  The comparison is done using unsigned characters, so that
** '\200' is greater than '\0'.
*/

#include "libft.h"

int			ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
