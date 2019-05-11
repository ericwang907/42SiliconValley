/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:15:49 by erwang            #+#    #+#             */
/*   Updated: 2019/05/04 16:15:52 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *str, int c, size_t n)
{
	unsigned long i;
	unsigned char *cstr;

	i = 0;
	cstr = (unsigned char *)str;
	while (i < n)
	{
		if (cstr[i] == c)
			return (str);
		i++;
	}
	return (NULL);
}
