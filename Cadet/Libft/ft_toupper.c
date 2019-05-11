/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:58:16 by erwang            #+#    #+#             */
/*   Updated: 2019/05/03 21:04:26 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}