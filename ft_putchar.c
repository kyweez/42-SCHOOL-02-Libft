/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:08:29 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:20 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putchar(char c)
**
** DESCRIPTION :
** Outputs the character c to the standard output.
**
** PARAMETER #1 :
** The character to output.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
