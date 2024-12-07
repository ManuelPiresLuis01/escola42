/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:40:08 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 14:40:10 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para imprimir uma mensagem de erro padrão.
void	ft_error(void)
{
	write (2, "Error\n", 6);
}

// Função para imprimir uma mensagem de erro específica
// para o dicionário.
void	ft_error_dict(void)
{
	write (2, "Dict Error\n", 11);
}

// Função para verificar se o número passado
// como argumento ultrapassa o limite máximo.
int	passou(char *str)
{
	if (ft_strlen(str) > \
	ft_strlen("9999999999999999999999999999999999999999"))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}

// Função principal do programa que processa os argumentos,
// verifica o dicionário e inicia a impressão do número por extenso.
int	main(int argc, char **argv)
{
	char	*dictpath;
	char	*nbr;

	if (passou(argv[1]))
		return (1);
	if (!ft_check_args(argc, argv, &dictpath, &nbr))
	{
		ft_error();
		return (1);
	}
	if (!ft_check_dict(dictpath))
	{
		free(nbr);
		ft_error_dict();
		return (1);
	}
	if (!ft_init(dictpath, nbr))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}
