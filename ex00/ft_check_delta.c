/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddjoehan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:38:07 by ddjoehan          #+#    #+#             */
/*   Updated: 2022/07/17 19:04:17 by ddjoehan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_top(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	views;

	i = 0;
	max = 0;
	views = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				views++;
			}
			i++;
		}
		if (entry[pos % 4] != views)
			return (1);
	}
	return (0);
}

int	check_bot(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	views;

	i = 4;
	max = 0;
	views = 0;
	if (pos / 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				views++;
			}
		}
		if (entry[4 + pos % 4] != views)
			return (1);
	}
	return (0);
}

int	check_left(int tab[4][4], int posm int entry[16])
{
	int	i;
	int	max;
	int	views;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				views++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != views)
			return (1);
	}
	return (0);
}

int	check_right(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	views;

	i = 4;
	max = 0;
	views = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				views++;
			}
		}
		if (entry[12 + pos / 4] != views)
			return (1);
	}
	return (0);
}

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_top(tab, pos, entry) == 1)
		return (1);
	if (check_bot(tab, pos, entry) == 1)
		return (1);
	if (check_left(tab, pos, entry) == 1)
		return (1);
	if (check_right(tab, pos, entry) == 1)
		return (1);
	return (0);
}
