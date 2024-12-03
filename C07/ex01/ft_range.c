/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:37:00 by mluis             #+#    #+#             */
/*   Updated: 2024/12/02 20:40:29 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		difer;
	int		i;
	int		*range;
	int		*d;

	if (min >= max)
		return (0);
	difer = max - min;
	range = malloc(difer * sizeof(int));
	if (!range)
		return (0);
	i = 0;
	while (i < difer)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
