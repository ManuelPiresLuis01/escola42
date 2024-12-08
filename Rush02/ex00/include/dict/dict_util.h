/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:28:37 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:28:38 by mluis            ###   ########.fr       */
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
