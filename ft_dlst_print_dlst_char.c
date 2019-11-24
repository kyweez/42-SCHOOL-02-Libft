/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_print_dlst_char.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:58:46 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 17:01:18 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlst_print_dlst_char(t_dlist **dlst)
{
	int		i;
	t_dlist	*tmp;

	tmp = *dlst;
	if (dlst)
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
