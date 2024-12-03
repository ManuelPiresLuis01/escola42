/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:04:12 by mluis             #+#    #+#             */
/*   Updated: 2024/12/02 21:04:46 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		difer;
	int		i;
	int		*str;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	difer = max - min;
	str = malloc(difer * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = str;
	i = 0;
	while (index < difer)
	{
		str[i] = min + i;
		i++;
	}
	return (difer);
}
