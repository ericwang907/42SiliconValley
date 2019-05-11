/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:32:36 by erwang            #+#    #+#             */
/*   Updated: 2019/05/03 13:38:27 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (*haystack == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
