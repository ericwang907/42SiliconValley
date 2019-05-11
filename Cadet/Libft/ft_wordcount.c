/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 18:36:39 by erwang            #+#    #+#             */
/*   Updated: 2019/05/09 19:05:05 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*  This function is for ft_strsplit. It returns the number of words. Each word is seperated by a delimiter.
 */

size_t	ft_wordcount(char const *s, char c) 
{
	int i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if((s[i] != c && s[i- 1] == c && i != 0) || (s[i] != c && i == 0))
			count++;
		i++;
	}
	return (count);
}
