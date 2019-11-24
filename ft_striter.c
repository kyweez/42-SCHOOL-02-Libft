/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:53:29 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:04 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_striter(char *str, void (*function)(char *))
**
** DESCRIPTION :
** Applies the function f to each character of the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
**
** PARAMETER #1 :
** The string to iterate.
**
** PARAMETER #2 :
** The function to apply to each character of s.
*/

void	ft_striter(char *str, void (*function)(char *))
{
	if (str && function)
	{
		while (*str)
		{
			function(str);
			str++;
		}
	}
}
