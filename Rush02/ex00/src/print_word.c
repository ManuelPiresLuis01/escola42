/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:40:46 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 14:40:48 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para imprimir a palavra associada a um algarismo específico.
int	ft_print_figure(char *nbr, char **dict)
{
	int		i;
	char	*dict_word;
	char	*dict_number;

	i = 0;
	while (dict[i])
	{
		dict_word = ft_get_dict_word(dict[i]);
		dict_number = ft_get_dict_number(dict[i]);
		if (ft_strcmp(nbr, dict_number) == 0)
		{
			ft_putstr(dict_word);
			free(dict_word);
			free(dict_number);
			return (1);
		}
		free(dict_word);
		free(dict_number);
		i++;
	}
	return (0);
}

// Função para imprimir um valor exato associado a uma entrada do dicionário.
int	ft_print_exact_value(char *nbr, char **dict)
{
	int		i;
	char	*dict_word;
	char	*dict_number;

	i = 0;
	while (dict[i])
	{
		dict_word = ft_get_dict_word(dict[i]);
		dict_number = ft_get_dict_number(dict[i]);
		if (ft_strcmp(nbr, dict_number) == 0)
		{
			ft_putstr(dict_word);
			free(dict_word);
			free(dict_number);
			return (1);
		}
		free(dict_word);
		free(dict_number);
		i++;
	}
	return (0);
}
