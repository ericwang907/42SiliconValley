/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:49:33 by erwang            #+#    #+#             */
/*   Updated: 2019/05/09 15:50:56 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, '\n', 1);
}
