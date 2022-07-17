/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddjoehan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:29:39 by ddjoehan          #+#    #+#             */
/*   Updated: 2022/07/17 19:53:27 by ddjoehan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	solve(int tab[4][4], int pos, int entry[16])
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		//Verifie que le nombre a placer est correct
		if (check_duplicate(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			//Verifie la correspondance a Delta
			if (check_delta(tab, pos, entry) == 0)
			{
				//On verifie l'option suivante grace a la recursivite
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	//Aucune solution
	return (0);
}
