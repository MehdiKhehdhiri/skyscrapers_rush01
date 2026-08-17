/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkhedh <mehkhedh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 21:38:14 by mehkhedh          #+#    #+#             */
/*   Updated: 2026/08/15 22:25:29 by mehkhedh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_g(int contrainte[4][4], int grille[4][4], char **argv)
{
	int	i;
	int	j;
	int	compt;

	i = 0;
	compt = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grille[i][j] = 0;
			contrainte[i][j] = argv[1][compt] - '0';
			j++;
			compt = compt + 2;
		}
		i++;
	}
}

void	print_grid(int grille[4][4])
{
	int		i;
	int		j;
	char	nbr;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			nbr = grille[i][j] + '0';
			write(1, &nbr, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
