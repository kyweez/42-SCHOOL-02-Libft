/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 13:14:43 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/18 19:40:53 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void	ft_print_char_tab(const char **tab)
**
** DESCRIPTION :
** Print on the standard output each string of character contained in cells of a
** tab given as argument to the function. Each line is followed by a '\n'
*/

#include "libft.h"

void	ft_print_char_tab(const char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putendl(tab[i]);
		i++;
	}
}
