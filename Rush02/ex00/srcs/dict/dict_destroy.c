/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:19:59 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:20:03 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"

void	dict_destroy(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		free(dict->keys[i]);
		free(dict->values[i]);
		i++;
	}
	free(dict);
}
