/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcristov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 07:48:16 by dcristov          #+#    #+#             */
/*   Updated: 2024/11/03 07:48:27 by dcristov         ###   ########.fr       */
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
