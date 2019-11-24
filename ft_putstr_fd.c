/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:08:00 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:13 by auboudie         ###   ########.fr       */
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

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(const char *str, int fd)
{
	if (str)
		write(fd, str, ft_strlen(str));
}
