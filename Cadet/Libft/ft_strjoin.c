/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 17:16:04 by erwang            #+#    #+#             */
/*   Updated: 2019/05/06 17:36:58 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))
	if (new != '\0')
		return (new = ft_strcat(s1, s2));
	return (NULL);
}
