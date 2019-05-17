/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeynalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:42:52 by zzeynalo          #+#    #+#             */
/*   Updated: 2019/04/14 21:45:07 by zzeynalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ref.h"
#include <unistd.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		rush(int x, int y);

int			ft_atoi(char *str)
{
	int neg;
	int num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int			main(int ac, char **av)
{
	if (ac >= 1)
	{
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	}
	return (0);
}
