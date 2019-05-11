/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:23:24 by erwang            #+#    #+#             */
/*   Updated: 2019/05/01 22:39:53 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned long i;
	unsigned char *cstr1;
	unsigned char *cstr2;

	i = 0;
	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	while (i < n)
	{
		cstr1[i] = cstr2[i];
		i++;
	}
	return (str1);
}
