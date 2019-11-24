/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:51:59 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:11:25 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putnbr_fd(int nbr, int fd)
**
** DESCRIPTION :
** Outputs the integer n to the file descriptor fd.
**
** PARAMETER #1 :
** The integer to print.
**
** PARAMETER #2 :
** The file descriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int nb;

	if (nbr < 0)
		ft_putchar_fd('-', fd);
	nb = (nbr < 0) ? -nbr : nbr;
	if (nb > 9)
		ft_putnbr_fd((nb / 10), fd);
	ft_putchar_fd(((nb % 10) + 48), fd);
}
