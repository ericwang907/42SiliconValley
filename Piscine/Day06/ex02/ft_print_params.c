/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:21:10 by erwang            #+#    #+#             */
/*   Updated: 2019/04/03 22:52:41 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int i2;

	i = 1;
	i2 = 0;
	if (argc == 1)
	{
		return (0);
	}
	while (i < argc)
	{
		while (argv[i][i2])
		{
			ft_putchar(argv[i][i2++]);
		}
		ft_putchar('\n');
		i2 = 0;
		i++;
	}
	return (0);
}
