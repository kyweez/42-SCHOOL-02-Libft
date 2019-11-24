/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrendl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:47:24 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:14:03 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putnbrendl(int nbr)
**
** DESCRIPTION :
** Outputs the integer n followed by a '\n' to the standard output.
**
** PARAMETER #1 :
** The integer to print.
*/

#include "libft.h"

void	ft_putnbrendl(int nbr)
{
	ft_putnbr(nbr);
	ft_putchar('\n');
}
