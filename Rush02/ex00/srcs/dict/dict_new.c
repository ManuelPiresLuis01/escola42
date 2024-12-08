/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:20:25 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:20:28 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"

static char	**str_arr_new(void)
{
	char	**arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char *) * 128);
	while (i < 128)
	{
		arr[i] = malloc(sizeof(char) * 128);
		i++;
	}
	return (arr);
}

t_dict	dict_new(void)
{
	t_dict	dict;

	dict.keys = str_arr_new();
	dict.values = str_arr_new();
	dict.size = 0;
	return (dict);
}
