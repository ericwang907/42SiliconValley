/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeynalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:50:00 by zzeynalo          #+#    #+#             */
/*   Updated: 2019/04/14 20:50:14 by zzeynalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ref.h"

char	**ft_get_tests_tab(void)
{
	char **tab;

	if (!(tab = (char **)malloc(sizeof(char *) * 5 * 5)))
		return (0);
	tab[COLLE00] = "o-o|oo";
	tab[COLLE01] = "/*\\*\\/";
	tab[COLLE02] = "ABABCC";
	tab[COLLE03] = "ABCBAC";
	tab[COLLE04] = "ABCBCA";
	return (tab);
}

char	**ft_get_colles(int col, int lines)
{
	char	**strings;
	char	**params;
	int		i;

	i = 0;
	params = ft_get_tests_tab();
	if (!(strings = (char **)malloc(sizeof(char *) * col * (lines + 1))))
		return (0);
	while (i < 5)
	{
		strings[i] = rushs(col, lines, params[i]);
		i++;
	}
	strings[i] = 0;
	return (strings);
}

int		*ft_compare(char **tocompare, t_char *start)
{
	int		*valid;
	int		test_nbr;

	test_nbr = 0;
	if (!(valid = (int *)malloc(sizeof(int) * 5)))
		return (0);
	while (test_nbr < 5)
	{
		valid[test_nbr] = ft_strlistcmp(tocompare[test_nbr], start);
		test_nbr++;
	}
	return (valid);
}

int		ft_strlistcmp(char *str, t_char *list)
{
	while (list->next && *str != '\0')
	{
		if (list->character != *str++)
			return (0);
		list = list->next;
	}
	return (1);
}
