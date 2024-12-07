/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_word_span.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcristov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 07:45:49 by dcristov          #+#    #+#             */
/*   Updated: 2024/11/03 07:46:04 by dcristov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para calcular o comprimento de uma palavra.
int	ft_word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Função para calcular o comprimento de um número.
int	ft_number_len(char *str)
{
	int	i;

	i = 0;
	while (ft_is_number(str[i]))
		i++;
	return (i);
}

// Função para extrair a palavra associada a uma entrada do dicionário.
char	*ft_get_dict_word(char *str)
{
	int		i;
	int		j;
	int		word_len;
	char	*dest;

	i = 0;
	while (str[i] != ':')
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] == ' ')
		i++;
	word_len = ft_word_len(str + i);
	dest = malloc(sizeof(char) * (word_len + 1));
	if (!dest)
		return (0);
	*dest = 0;
	j = 0;
	while (str[i])
		dest[j++] = str[i++];
	dest[word_len] = '\0';
	return (dest);
}

// Função para extrair o número associado a uma entrada do dicionário.
char	*ft_get_dict_number(char *line)
{
	int		i;
	int		nbr_len;
	char	*nbr;

	i = 0;
	nbr_len = ft_number_len(line);
	nbr = malloc(sizeof(char) * (nbr_len + 1));
	if (!nbr)
		return (0);
	*nbr = 0;
	while (ft_is_alpha(line[i]))
	{
		nbr[i] = line[i];
		i++;
	}
	nbr[nbr_len] = '\0';
	return (nbr);
}