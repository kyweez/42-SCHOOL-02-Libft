/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:03:53 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:23 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putchar_fd(char c, int fd)
**
** DESCRIPTION :
** Outputs the char c to the file descriptor fd.
**
** PARAMETER #1 :
** The character to output.
**
** PARAMETER #2 :
** The file descriptor.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
