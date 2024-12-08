/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_type.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:28:28 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:28:29 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_TYPE_H
# define DICT_TYPE_H

typedef struct s_dict
{
	char	**keys;
	char	**values;
	int		size;
}	t_dict;

#endif
