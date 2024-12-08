/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:17:08 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:17:14 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief find the length of a string
/// @param str string to be measured
/// @return the length of the string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
