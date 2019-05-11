/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 18:48:11 by erwang            #+#    #+#             */
/*   Updated: 2019/05/09 18:51:20 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Made for ft_strsplit. Counts the length of the word from one delimiter to another
 */

int		ft_strsubcount(char const *s, int index, char c)
{
	int i;

	i = 0;
	while(s[index] != c && s[index] != '\0')
	{
		index++;
		i++;
	}
	return (i);
}
