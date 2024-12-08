/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:17:37 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:17:42 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/// @brief concatenate two strings
/// @param dest the destination string
/// @param src the source string
/// @param nb the number of characters to concatenate
/// @return the concatenated string
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
