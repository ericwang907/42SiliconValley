# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_recursive_power                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erwang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 23:27:24 by erwang            #+#    #+#              #
#    Updated: 2019/03/30 23:38:01 by erwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0);
	{
		return (1);
	}
	else
		nb *= ft_recursive_power(nb, power -1)
}
