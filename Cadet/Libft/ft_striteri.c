/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:15:50 by erwang            #+#    #+#             */
/*   Updated: 2019/05/05 20:49:35 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *));
{
	int i;
	
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
