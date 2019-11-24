/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 10:51:51 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:08 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_strcmp(const char *str1, const char *str2)
**
** DESCRIPTION :
** The ft_strcmp function lexicographically compare the null-terminated strings
** s1 and s2.
**
** RETURN VALUE :
** The ft_strcmp function return an integer greater than, equal to, or less than
** 0, according as the string s1 is greater than, equal to, or less than the
** string s2.
** The comparison is done using unsigned characters, so that `\200' is greater
** than '\0'.
*/

int		ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return ((unsigned char)(*str1) - (unsigned char)(*str2));
}
