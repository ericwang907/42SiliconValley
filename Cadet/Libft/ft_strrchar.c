/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:19:15 by erwang            #+#    #+#             */
/*   Updated: 2019/05/02 23:10:04 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == c)
			return (&((char *)str)[i]);
		i--;
	}
	if (!c)
		return ((char *)str);
	return (NULL);
}
