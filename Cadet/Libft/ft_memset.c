/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:31:52 by erwang            #+#    #+#             */
/*   Updated: 2019/05/01 22:43:53 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned long i;
	unsigned char *res;

	i = 0;
	res = (unsigned char *)str;
	while (i < n)
	{
		res[i] = c;
		i++;
	}
	return (str);
}
