/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:52:19 by erwang            #+#    #+#             */
/*   Updated: 2019/04/09 20:06:34 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int));
{
	int i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i+1]) > 0)
			return (0);
		i++;
	}

	return (1);
}
