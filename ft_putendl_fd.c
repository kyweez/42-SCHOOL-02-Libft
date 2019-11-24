/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:11:11 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 20:11:34 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_putendl_fd(const char *str, int fd)
**
** DESCRIPTION :
** Outputs the string s to the file descriptor fd followed by a '\n'.
**
** PARAMETER #1 :
** The string to output.
**
** PARAMETER #2 :
** The file descriptor.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(const char *str, int fd)
{
	if (str)
	{
		write(fd, str, ft_strlen(str));
		write(fd, "\n", 1);
	}
}
