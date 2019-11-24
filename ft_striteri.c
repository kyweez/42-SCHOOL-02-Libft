/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:33:28 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:27:03 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_striteri(char *str, void (*function)(unsigned int, char *))
**
** DESCRIPTION :
** Applies the function f to each character of the string passed as argument,
** and passing its index as first argument. Each character is passed by address
** to f to be modified if necessary.
**
** PARAMETER #1 :
** The string to iterate.
**
** PARAMETER #2 :
** The function to apply to each character of s and its index.
*/

void	ft_striteri(char *str, void (*function)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (str && function)
	{
		while (str[i] != '\0')
		{
			function(i, &str[i]);
			i++;
		}
	}
}
