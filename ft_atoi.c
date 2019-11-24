/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:33:04 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:18:16 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int	ft_atoi(const char *str)
**
** DESCRIPTION :
** The ft_atoi function converts the initial portion of the string pointed to by
** str to int representation.
** It is supposed to be equivalent to: (int)strtol(str, (char **)NULL, 10);
**
** PARAM #1 :
** The string used to find the int inside.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				sign;
	long long int	tmp;

	sign = 0;
	tmp = 0;
	while (ft_isspace(*str) || ft_issign(*str) || ft_isdigit(*str))
	{
		while (ft_isspace(*str))
			str++;
		if (ft_issign(*str))
		{
			sign = (*str == '-') ? 1 : 0;
			str++;
		}
		while (ft_isdigit(*str))
		{
			tmp = (tmp * 10) + *str - '0';
			str++;
		}
		if (tmp > 9223372036854775807)
			return ((sign == 1) ? 0 : -1);
		return ((sign == 1) ? (int)tmp * -1 : (int)tmp);
	}
	return (0);
}
