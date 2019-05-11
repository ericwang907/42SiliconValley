/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:50:27 by erwang            #+#    #+#             */
/*   Updated: 2019/04/04 19:18:29 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LEN		42
#include <stdlib.h>

void ft_putstr(char *str);

int		main()
{
	int i;
	char *str;

	i = 0;
	str = (char*)malloc(sizeof(*str) * LEN + 1);
	while (i < LEN)
	{
		str[i] = '0' + i ;
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return 0;
}
