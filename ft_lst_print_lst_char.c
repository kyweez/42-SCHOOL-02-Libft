/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print_lst_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 11:25:23 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 16:32:12 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void ft_lst_print_lst_char(t_list **alst);
**
** DESCRIPTION :
** Takes as a parameter the adress of a pointer to a link and print the content
** and the content_size of each link until the end of the list. Note this
** function only print the content of the link if his type is (char *).
**
** PARAMETER #1 :
** The adress of a pointer to a link that needs to be printed.
*/

#include "libft.h"

void	ft_lst_print_lst_char(t_list **alst)
{
	int		i;
	t_list	*tmp;

	tmp = *alst;
	if (alst)
	{
		while (tmp)
		{
			i = 0;
			while ((size_t)i++ < 25)
				ft_putchar('#');
			ft_putendl("\nContenu du maillon :");
			ft_putstr("content      : ");
			ft_putendl((char *)(tmp->content));
			ft_putstr("content_size : ");
			ft_putnbrendl((int)(tmp->content_size));
			i = 0;
			while ((size_t)i++ < 25)
				ft_putchar('#');
			ft_putendl("\n");
			tmp = tmp->next;
		}
	}
}
