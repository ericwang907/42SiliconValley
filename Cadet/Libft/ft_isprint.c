/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:56:48 by erwang            #+#    #+#             */
/*   Updated: 2019/05/03 20:57:38 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(inc c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}