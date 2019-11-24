/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 10:24:03 by auboudie          #+#    #+#             */
/*   Updated: 2018/12/20 14:37:21 by auboudie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PROTOTYPE :
** char			**ft_strsplit(const char *src, char c)
**
** DESCRIPTION :
** Allocates (with malloc(3)) and returns an array of “fresh” strings (all
** ending with ’\0’, including the array itself) obtained by spliting s using
** the character c as a delimiter.
** If the allocation fails the function returns NULL.
**
** EXAMPLE :
** ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello",
** "fellow", "students"].
**
** RETURN VALUE :
** The array of “fresh” strings result of the split.
**
** PARAMETER #1 :
** The string to split.
**
** PARAMETER #2 :
** The delimiter character.
**
** NOTA BENE :
** Because of the 42 norm, i had to use a "int tab[2]". In order to use my
** ft_countword function, i had to cast a "char *tab" in short. I could also
** have used a "char tab[2]" and send the &tab[0] in which i could have
** assigned c;
*/

#include "libft.h"
#include <stdlib.h>

char			**ft_strsplit(const char *src, char c)
{
	int		i[2];
	char	**tab;
	size_t	len_word;
	char	s[2];

	*(short *)s = (short)c;
	if (!src ||
		!(tab = (char **)malloc(sizeof(char *) * (ft_countword(src, s) + 1))))
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (src[i[0]])
	{
		while (ft_char_to_skip(&src[i[0]], s))
			i[0]++;
		if (src[i[0]])
		{
			len_word = ft_strlendelim(&src[i[0]], s);
			if (!(tab[i[1]++] = ft_strndup(&src[i[0]], len_word)))
				return (ft_return_free_tab(tab, i[1]));
			i[0] += (int)len_word;
		}
	}
	tab[i[1]] = 0;
	return (tab);
}
