/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:29:52 by erwang            #+#    #+#             */
/*   Updated: 2019/04/06 16:38:17 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c) //Prints a Character
{
	write(1, &c, 1);	
}

void	print_grid(char **grid) //Prints the Grid
{	
	int x; // X Axis (Think Horizontally) av[y][x = Column]
	int y; // Y Axis (Think Vertically) av[y = Row][x]

	x = 0;
	y = 1;
	while(y < 10)
	{
		while (x < 9)
		{
			ft_putchar(grid[y][x]);
			if (x < 8)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			x++;	
		}
		x = 0;
		y++;
	}
}

int 	used_in_row_col(char **grid, int yrow, int xcol, char num) // Determines if Number is Used in Row
{	
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 9)
	{
		if (grid[yrow][i] == num)
			return 1; // Returns 1 if Number Exists in Row
		i++;
	}
	while(j < 10)
	{
		if	(grid[j][xcol] == num)
			return 1; // Returns 1 if Number Exists in Column
		j++;
	}
	return 0;
}

int		used_in_box(char **grid, int yrow, int xcol, char num) // Determines if Number Already Exists in Box
{
	int startRow; 
	int startCol;
	int i;
	int j;
	
	startRow = ((yrow - 1)/3 * 3) + 1;
	startCol = xcol / 3 * 3;
	i = startRow;
	j = startCol;
	while (i < (startRow + 3))
	{
		while (j < (startCol +3))
		{
			if (grid[i][j] == num)
				return 1; // Returns 1 if Number Exists in Row
			j++;
		}
		j = 0;
		i++;
	}
	return 0;
}

int		issafe(char **grid, int yrow, int xcol, char num) // Is Number Safe To Put Down?
{
	if ((used_in_row_col(grid, yrow, xcol, num) == 0) && (used_in_box(grid, yrow, xcol, num) == 0))
		return 1;
	else
		return 0;
}

int 	solver(char **grid, int yrow, int xcol) // IN PROGRESS: A Recursive Function That Solve Sudoku
{
	int i;
	
	i = 1;
	if (grid[yrow][xcol] != '.') // Finds the Dots
	{
		if((xcol + 1) < 9)
			return solver(grid, yrow, xcol + 1);
		else if ((yrow + 1) < 10)
			return solver(grid, yrow + 1, 0);
		else
			return 1;
	}

	else
	{
		while(i < 10)
		{
			if(issafe(grid, yrow, xcol, i))
			{
				grid[yrow][xcol] = i;
				if (solver(grid, yrow, xcol))
					return 1;
				else
					grid[yrow][xcol] = '.';
			}
			i++;		
		}
		return 0;
	}
}

int		main(int ac, char **av)
{
	printf("%d\n", ac);
	printf("%s\n", av[9]);
	if (ac != 10) // Error Proofing, outputs error if there aren't ten parameters
	{
		write(1, "Error\n", 6);
		ft_putchar('\n');
	}
	
	print_grid(av);	
	ft_putchar('\n');
	ft_putchar('\n');
	if (solver(av, 1, 0) == 1)
		print_grid(av);	
	return (0);
}
