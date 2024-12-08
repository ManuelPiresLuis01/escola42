/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:16:32 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:16:36 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/// @brief concatenate two strings
/// @param dest the destination string
/// @param src the source string
/// @return the concatenated string
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	c = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
