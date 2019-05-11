/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:15:18 by erwang            #+#    #+#             */
/*   Updated: 2019/05/01 22:42:43 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned long i;
	unsigned char *cdest;
	unsigned char *csrc;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	while (i < n)
	{
		if (cdest[i] == c)
			break ;
		else
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
