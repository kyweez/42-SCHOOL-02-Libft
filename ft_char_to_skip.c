/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_skip.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:18:53 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/19 01:20:16 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_to_skip(const char *c, const char *str)
{
	if (c && str)
	{
		while (*c && *str)
		{
			if (*c == *str)
				return (1);
			str++;
		}
		return (0);
	}
	return (0);
}
