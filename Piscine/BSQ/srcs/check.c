/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:32:37 by erwang            #+#    #+#             */
/*   Updated: 2019/04/16 22:52:53 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "util.h"

extern char g_empty;
extern char g_obs;
extern char g_full;
extern int	g_row;
extern int g_col;

int		readfirstline(int *fd)
{
	char	c;
	int		line;

	line = 0;
	while ((read(*fd, &c, 1)))
	{
		if (ft_isdigit(c))
			line = 10 * line + (((int)c) - 48);
		else
			break ;
	}
	g_empty = c;
	read(*fd, &c, 1);
	g_obs = c;
	read(*fd, &c, 1);
	g_full = c;
	read(*fd, &c, 1);
	return (line);
}

int		checkrowcol(int *fd, int colcount)
{
	char c;

	while (read(*fd, &c, 1))
	{
		if (c != '\n')
		{
			colcount++;
			if (c != g_empty && c != g_obs)
				return (1);
		}
		else
		{
			g_row++;
			if (g_col == 0)
				g_col = colcount;
			else
			{
				if (g_col != colcount)
					return (1);
			}
			colcount = 0;
		}
	}
	return (0);
}
