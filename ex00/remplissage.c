/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkhedh <mehkhedh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 21:38:55 by mehkhedh          #+#    #+#             */
/*   Updated: 2026/08/16 19:19:21 by mehkhedh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	view_uc(int k, int position, int grille[4][4])
{
	int	i;
	int	count;
	int	max;
	int	x;
	int	y;

	y = position / 4;
	x = position % 4;
	i = 1;
	count = 1;
	max = grille[0][x];
	while (i <= y)
	{
		if (grille[i][x] > max)
		{
			count++;
			max = grille[i][x];
		}
		i++;
	}
	if (k > max)
		count ++;
	return (count);
}

int	verif_upcol(int k, int position, int grille[4][4], int upcol[4])
{
	int	y;
	int	x;
	int	count;

	count = view_uc(k, position, grille);
	y = position / 4;
	x = position % 4;
	if (y == 3 && count == upcol[x])
		return (1);
	else if (y == 3 && count != upcol[x])
		return (0);
	else
		return (1);
}

int	view_dc(int k, int position, int grille[4][4])
{
	int	i;
	int	count;
	int	max;
	int	x;
	int	y;

	y = position / 4;
	x = position % 4;
	i = y - 1;
	count = 1;
	max = k;
	while (i >= 0)
	{
		if (grille[i][x] > max)
		{
			count++;
			max = grille[i][x];
		}
		i--;
	}
	return (count);
}

int	verif_downcol(int k, int position, int grille[4][4], int downcol[4])
{
	int	y;
	int	x;
	int	count;

	count = view_dc(k, position, grille);
	y = position / 4;
	x = position % 4;
	if (y == 3 && count == downcol[x])
	{
		return (1);
	}
	else if (y == 3 && count != downcol[x])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	verif_doubcol(int k, int position, int grille[4][4])
{
	int	y;
	int	x;

	x = position % 4;
	y = 0;
	while (y < 4)
	{
		if (grille[y][x] == k)
		{
			return (0);
		}
		else
		{
			y++;
		}
	}
	return (1);
}
