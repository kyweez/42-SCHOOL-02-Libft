/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:05:33 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:28:26 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** void ft_lstadd(t_list **alst, t_list *new);
**
** DESCRIPTION :
** Adds the element new at the beginning of the list.
**
** PARAMETER #1 :
** The address of a pointer to the first link of a list.
**
** PARAMETER #2 :
** The link to add at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
