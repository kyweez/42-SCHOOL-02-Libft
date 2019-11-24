/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:20:03 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:12:40 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strncpy(char *dst, const char *src, size_t n)
**
** DESCRIPTION :
** The ft_strncpy functions copies at most len characters from src into dst.
** If src is less than len characters long, the remainder of dst is filled with
** '\0' characters. Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** RETURN VALUES :
** The ft_strncpy functions return dst.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (*src)
			*(dst++) = *(src++);
		else
			*(dst++) = '\0';
		i++;
		n--;
	}
	return (dst - i);
}
