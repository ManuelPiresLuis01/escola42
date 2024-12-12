/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:57:27 by mluis             #+#    #+#             */
/*   Updated: 2024/12/11 19:57:28 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_rand(unsigned int old_val)
{
	return (old_val * 1103515245 + 12345);
}

int	**gen_rand_tab(int x, int y, unsigned int prop, unsigned int seed)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	tab = malloc(sizeof(int *) * x);
	while (i < x)
	{
		j = 0;
		tab[i] = malloc(sizeof(int) * y);
		while (j < y)
		{
			seed = ft_rand(seed);
			if (seed % 100 < prop)
				tab[i][j] = 0;
			else
				tab[i][j] = 1;
			j++;
		}
		i++;
	}
	return (tab);
}
