/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:39:42 by erwang            #+#    #+#             */
/*   Updated: 2019/03/30 23:25:11 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		temp = nb;
		while (power > 1)
		{
			temp *= nb;
			power--;
		}
		return (temp);
	}
}
