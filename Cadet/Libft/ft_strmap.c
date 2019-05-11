/* ************************************************************************** */
*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 20:53:18 by erwang            #+#    #+#             */
/*   Updated: 2019/05/06 00:53:23 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;

	if (!s || !f)
		return (NULL);
	if (res = malloc(sizeof(char) * (ft_strlen(s) + 1)))
	{
		while (s[i] != '\0')
		{
			res[i] = f(s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
