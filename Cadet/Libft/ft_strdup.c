/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:49:00 by erwang            #+#    #+#             */
/*   Updated: 2019/05/02 23:11:18 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char *s2;

	s2 = (char *)malloc(sizeof(char) * ft_strlen(str));
	if (s2 != NULL)
	{
		ft_strcpy(s2, (char *)s)
		return (s2);
	}
	return (NULL);
}
