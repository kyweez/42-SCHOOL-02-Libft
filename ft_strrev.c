/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:38:50 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 00:24:05 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char		*ft_strrev(char *str)
**
** DESCRIPTION :
** The ft_strrev reverse a string of characters.
**
** RETURN VALUE :
** The functions ft_strrev returns the string reversed.
*/

#include "libft.h"
#include <stdio.h>

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	j = (int)len - 1;
	if (str)
	{
		while (i < j)
		{
			ft_swap(&str[i], &str[j]);
			i++;
			j--;
		}
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
