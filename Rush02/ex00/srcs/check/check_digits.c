/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:22:06 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:22:08 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief check if the string contains only digits
/// @param str string to check
/// @return 1 if the string contains only digits, 0 otherwise
int	check_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
