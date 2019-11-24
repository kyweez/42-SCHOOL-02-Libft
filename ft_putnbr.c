/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 23:40:30 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:11:14 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putnbr(int nbr)
**
** DESCRIPTION :
** Outputs the integer n to the standard output.
**
** PARAMETER #1 :
** The integer to print.
**
** PARAMETER #2 :
** The file descriptor.
*/

#include "libft.h"

void	ft_putnbr(int nbr)
{
	unsigned int nb;

	if (nbr < 0)
		ft_putchar('-');
	nb = (nbr < 0) ? -nbr : nbr;
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}
