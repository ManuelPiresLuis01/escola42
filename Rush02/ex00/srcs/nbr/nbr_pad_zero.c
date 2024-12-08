/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_pad_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:13:03 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:13:07 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/// @brief pad zero to the left of the char
/// @param c the char to pad
/// @param zeros the number of zeros to pad
/// @return the padded string
char	*nbr_pad_zero(char c, int zeros)
{
	char	*p;
	int		i;
	int		len;

	len = 1 + zeros;
	p = malloc(len + 1);
	p[0] = c;
	i = 1;
	while (i < len)
	{
		p[i] = '0';
		i++;
	}
	p[i] = '\0';
	return (p);
}
