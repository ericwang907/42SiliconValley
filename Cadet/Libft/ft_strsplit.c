/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 18:25:31 by erwang            #+#    #+#             */
/*   Updated: 2019/05/13 21:12:57 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Returns a list of words from the string input. The words are seperated from
**the delimiter char c.
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	res = s ? malloc(sizeof(char *) * ft_wordcount(s, c)) : NULL;
	if (res == NULL || ft_wordcount(s, c) == 0)
		return (NULL);
	while (j < ft_wordcount(s, c))
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		res[j] = ft_strnew(ft_strsubcount(s, i, c));
		while (s[i] != c && s[i] != '\0')
			res[j][k++] = s[i++];
		res[j][k] = '\0';
		k = 0;
		j++;
	}
	return (res);
}
