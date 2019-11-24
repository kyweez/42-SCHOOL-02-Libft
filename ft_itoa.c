/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:23:43 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 17:38:48 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** int		ft_isupper(int c)
**
** DESCRIPTION :
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
**
** PARAMETER #1 :
** The integer to be transformed into a string.
**
** RETURN VALUES :
** The string representing the integer passed as argument.
*/

#include "libft.h"

static size_t	ft_len_nbr(int nbr)
{
	size_t		len_nbr;

	len_nbr = 1;
	if (nbr == -2147483648)
		return (11);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len_nbr++;
	}
	while (nbr / 10 >= 1)
	{
		nbr = nbr / 10;
		len_nbr++;
	}
	return (len_nbr);
}

char			*ft_itoa(int nbr)
{
	int			sign;
	char		*itoa;
	int			len_nbr;

	len_nbr = ft_len_nbr(nbr);
	if (!(itoa = ft_strnew((size_t)len_nbr)))
		return (NULL);
	if (nbr == -2147483648)
		return (ft_strcpy(itoa, "-2147483648"));
	sign = 0;
	if (nbr < 0)
	{
		itoa[0] = '-';
		sign = 1;
		nbr = nbr * -1;
	}
	len_nbr--;
	while (len_nbr >= 0)
	{
		itoa[len_nbr--] = (nbr % 10) + 48;
		nbr = nbr / 10;
		if (len_nbr == 0 && sign == 1)
			return (itoa);
	}
	return (itoa);
}
