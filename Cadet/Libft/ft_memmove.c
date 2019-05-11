/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 18:59:09 by erwang            #+#    #+#             */
/*   Updated: 2019/05/01 22:40:25 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long i;
	unsigned char *cdest;
	unsigned char *csrc;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
