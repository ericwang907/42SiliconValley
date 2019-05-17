/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:31:52 by erwang            #+#    #+#             */
/*   Updated: 2019/05/12 16:13:03 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned long i;
	unsigned char *res;

	i = 0;
	res = (unsigned char *)str;
	while (i < n)
	{
		res[i] = 0;
		i++;
	}
	return (str);
}
