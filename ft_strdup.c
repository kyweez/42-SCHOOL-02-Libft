/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:23:29 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 23:27:00 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strdup(const char *src)
**
** DESCRIPTION :
** The ft_strdup function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it. The pointer may subsequently
** be used as an argument to the function free(3).
** If insufficient memory is available, NULL is returned (and supposed errno is
** set to ENOMEM.)
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	return (dst - i);
}
