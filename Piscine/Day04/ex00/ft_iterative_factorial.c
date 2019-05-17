/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 21:46:35 by erwang            #+#    #+#             */
/*   Updated: 2019/03/30 22:37:45 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int product;
	int i;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		product = 1;
		i = 1;
		while (i <= nb)
		{
			product *= i;
			i++;
		}
		return (product);
	}
}
