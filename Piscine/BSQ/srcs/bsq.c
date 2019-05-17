/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:21:46 by erwang            #+#    #+#             */
/*   Updated: 2019/04/17 22:24:23 by aleung           ###   ########.fr       */
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
extern int **g_bsq;
extern int g_maxx;
extern int g_maxy;

void	printsolution(void)
{
	int y;
	int x;

	y = 0;
	while (y < g_row)
	{
		x = 0;
		while (x < g_col)
		{
			if (g_bsq[y][x] == 0)
				ft_putchar(g_obs);
			else if ((g_maxx - g_bsq[g_maxy][g_maxx] < x && x < g_maxx + 1) &&
			(g_maxy - g_bsq[g_maxy][g_maxx] < y && y < g_maxy + 1))
				ft_putchar(g_full);
			else
				ft_putchar(g_empty);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	skipfirstline(int *file)
{
	char c;

	while (read(*file, &c, 1))
	{
		if (c == '\n')
			break ;
	}
}

void	updatemax(int x, int y)
{
	if (g_bsq[y][x] > g_bsq[g_maxy][g_maxx])
	{
		g_maxy = y;
		g_maxx = x;
	}
}

void	calculatebsq(int *file, int x, int y)
{
	int		j;
	char	c;

	g_maxy = 0;
	g_maxx = 0;
	j = 0;
	while (read(*file, &c, 1))
	{
		if (c != '\n')
		{
			x = j % g_col;
			y = j / g_col;
			if (c == g_empty)
				g_bsq[y][x] = 1;
			else if (c == g_obs)
				g_bsq[y][x] = 0;
			if ((x != 0 && y != 0) && g_bsq[y][x] != 0)
				g_bsq[y][x] = g_bsq[y][x] +
				ft_min(g_bsq[y][x - 1], g_bsq[y - 1][x], g_bsq[y - 1][x - 1]);
			updatemax(x, y);
			j++;
		}
	}
}

void	createbsq(void)
{
	int i;

	g_bsq = (int **)malloc(sizeof(int*) * g_row);
	i = 0;
	while (i < g_row)
	{
		g_bsq[i] = (int *)malloc(sizeof(int) * g_col);
		i++;
	}
}
