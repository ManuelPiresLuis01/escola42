/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:13:17 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:13:21 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/// @brief get the substring from the string
/// @param str the string
/// @param from from where to start
/// @param to where to end
/// @return the substring
char	*nbr_substr(char *str, int from, int to)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = to - from + 1;
	s = malloc(len + 1);
	while (i < len)
	{
		s[i] = str[from + i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
