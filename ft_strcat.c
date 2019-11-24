/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:21:05 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 16:49:54 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strcat(char *str1, const char *str2)
**
** DESCRIPTION :
** The ft_strcat function appends a copy of the null-terminated string s2 to the
** end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** RETURN VALUE :
** The ft_strcat function returns the pointer s1.
*/

char	*ft_strcat(char *str1, const char *str2)
{
	int i;

	i = 0;
	while (*str1)
	{
		str1++;
		i++;
	}
	while (*str2)
	{
		*str1++ = *str2++;
		i++;
	}
	*str1 = '\0';
	return (str1 - i);
}
