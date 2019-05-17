/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:21:10 by erwang            #+#    #+#             */
/*   Updated: 2019/04/03 23:15:07 by erwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int i2;

	i = argc - 1;
	i2 = 0;
	if (argc == 1)
	{
		return (0);
	}
	while (i > 0)
	{
		while (argv[i][i2])
		{
			ft_putchar(argv[i][i2++]);
		}
		ft_putchar('\n');
		i2 = 0;
		i--;
	}
	return (0);
}
