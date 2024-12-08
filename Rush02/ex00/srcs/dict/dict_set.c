/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:20:46 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:20:47 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"
#include "ft.h"

void	dict_set(t_dict *dict, char *key, char *value)
{
	ft_strcpy(dict->keys[dict->size], key);
	ft_strcpy(dict->values[dict->size], value);
	dict->size += 1;
}
