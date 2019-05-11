/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:13:55 by erwang            #+#    #+#             */
/*   Updated: 2019/05/04 16:12:58 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.lib.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return ((void*)str);
}
