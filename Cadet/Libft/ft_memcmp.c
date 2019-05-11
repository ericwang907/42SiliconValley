/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:43:38 by erwang            #+#    #+#             */
/*   Updated: 2019/05/01 22:44:35 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned long	i;
	unsigned char	*cstr1;
	unsigned char	*cstr2;
	int				result;

	i = 0;
	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	result = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		result += cstr1[i] - cstr2[i];
		i++;
	}
	return (result);
}
