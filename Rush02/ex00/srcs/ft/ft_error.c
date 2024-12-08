/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:15:28 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:15:33 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

/// @brief print error message
/// @param str error message
void	ft_error(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}
