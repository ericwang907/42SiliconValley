/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 22:56:01 by erwang            #+#    #+#             */
/*   Updated: 2019/04/02 18:54:09 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	result = 0;
	sign = 1;
	while (0 <= str[i] && str[i] <= 32)
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	if (str[i] == 43)
		i++;
	while (47 < str[i] && str[i] < 58)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
