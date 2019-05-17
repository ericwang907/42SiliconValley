/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 11:04:23 by aleung            #+#    #+#             */
/*   Updated: 2019/04/17 22:17:23 by aleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "bsq.h"
#include "check.h"

char	g_empty;
char	g_obs;
char	g_full;
int		g_row;
int		g_col;
int		**g_bsq;
int		g_maxx;
int		g_maxy;

void	getbsq(int file, int argc)
{
	skipfirstline(&file);
	g_maxx = 0;
	g_maxy = 0;
	calculatebsq(&file, 0, 0);
	printsolution();
	if (argc > 2)
		ft_putchar('\n');
}

int		check(int fd)
{
	int line;

	g_row = 0;
	g_col = 0;
	line = readfirstline(&fd);
	if (checkrowcol(&fd, 0) == 1)
		return (1);
	if (g_row != line)
		return (1);
	return (0);
}

void	freebsq(int fd)
{
	int i;

	close(fd);
	i = 0;
	while (i < g_row)
	{
		free(g_bsq[i]);
		i++;
	}
	free(g_bsq);
}

void	std(void)
{
	int		fd;
	char	c;

	fd = open("input", O_WRONLY | O_CREAT | O_TRUNC);
	while (read(STDIN_FILENO, &c, 1) > 0)
		write(fd, &c, 1);
	fd = open("input", O_RDONLY);
	if (fd > 0)
	{
		if (check(fd) == 1)
			ft_putstr("map error\n");
		else
		{
			createbsq();
			close(fd);
			fd = open("input", O_RDONLY);
			getbsq(fd, 1);
			freebsq(fd);
		}
	}
}

int		main(int argc, char **argv)
{
	int fd;
	int j;

	if (argc >= 2)
	{
		j = 0;
		while (j++ < argc)
		{
			fd = open(argv[j], O_RDONLY);
			if (fd > 0)
			{
				if (check(fd) == 1)
					ft_putstr("map error\n");
				else
				{
					createbsq();
					fd = open(argv[j], O_RDONLY);
					getbsq(fd, argc);
					freebsq(fd);
				}
			}
		}
	}
	else
		std();
}
