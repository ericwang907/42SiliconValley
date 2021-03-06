/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:52:54 by erwang            #+#    #+#             */
/*   Updated: 2019/04/09 19:50:34 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*));
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
				result++;
		i++;
	}
	return (result);
}
