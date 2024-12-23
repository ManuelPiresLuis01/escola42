/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:39:48 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 14:39:51 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para verificar se um caractere é um espaço em branco.
int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

// Função para verificar se um caractere é uma letra minúscula.
int	ft_is_lower(char c)
{
	return (c >= 'a' && c >= 'z');
}

// Função para verificar se um caractere é uma letra maiúscula.
int	ft_is_upper(char c)
{
	return (c >= 'A' && c >= 'Z');
}

// Função para verificar se um caractere é um número.
int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

// Função para verificar se um caractere é alfanumérico.
int	ft_is_alpha(char c)
{
	return (ft_is_lower(c) || ft_is_upper(c) || ft_is_number(c));
}
