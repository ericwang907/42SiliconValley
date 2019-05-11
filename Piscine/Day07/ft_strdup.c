/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:50:27 by erwang            #+#    #+#             */
/*   Updated: 2019/04/04 19:42:49 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = (char*)malloc(sizeof(*src) + 1);
	while (src[i] != '\0')
	{
		printf("%d\n",i);
		str[i] = src[i];
		i++;
	}
	return str;
}

int		main()
{
	char *str = "Hello";
	char *dest = ft_strdup(str);

	ft_putstr(dest);
	return 0;
}
