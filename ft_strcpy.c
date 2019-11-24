/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:38:23 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:07 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char	*ft_strcpy(char *dst, const char *src)
**
** DESCRIPTION :
**  The ft_strcpy functions copy the string src to dst (including the
** terminating `\0' character.)
**
** RETURN VALUE :
** The ft_strcpy function returns dst.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (*src)
	{
		*(dst++) = *(src++);
		i++;
	}
	*dst = '\0';
	return (dst - i);
}
