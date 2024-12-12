/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:31:20 by mluis             #+#    #+#             */
/*   Updated: 2024/12/08 18:31:21 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_UTIL_H
# define DICT_UTIL_H

int	dict_skip_non_numeric(char *str);
int	dict_skip_to_word(char *str);
int	dict_skip_to_next_entry(char *str);
int	dict_getnbr(char *dest, char *str);
int	dict_getword(char *dest, char *str);

#endif
