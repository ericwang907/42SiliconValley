/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:57:33 by erwang            #+#    #+#             */
/*   Updated: 2019/05/06 18:13:33 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	
	i = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (new != '\0' && s != '\0')
	{
		while (i < len)
		{
			new[i] = s[start];
			i++;
			start++;
		}
		new[i] = '\0';
	}
	return (NULL);
}
