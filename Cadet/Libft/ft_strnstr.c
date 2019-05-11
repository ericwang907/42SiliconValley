/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:31:56 by erwang            #+#    #+#             */
/*   Updated: 2019/05/03 14:14:45 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*haystack = NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		int j = 0;
		while (haystack[i] = needle[j] && j < len)
		{
			i++;
			j++;
		}
		if (j == len || needle[j] == '\0')
		{
			return ((char *)&haystack[i - j]);
		}
		i = (i - j) + 1
	}
	return (NULL);
}
