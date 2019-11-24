/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:27:13 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:30:25 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	*ft_memset(void *str, int c, size_t len)
**
** DESCRIPTION :
** The ft_memset function writes len bytes of value c (converted to an unsigned
** char) to the string b.
**
** RETURN VALUES :
** The ft_memset function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char *)str;
	while (len)
	{
		*tmp = (unsigned char)c;
		len--;
		tmp++;
	}
	return (str);
}
