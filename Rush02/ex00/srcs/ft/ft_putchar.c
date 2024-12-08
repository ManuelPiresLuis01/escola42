/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:15:45 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:15:48 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief print a character to the standard output
/// @param c character to be printed
void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
