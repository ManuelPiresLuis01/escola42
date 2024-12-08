/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:21:59 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:22:00 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

/// @brief check if the dictionary file exists
/// @param dict dictionary file
/// @return 1 if the file exists, 0 otherwise
int	check_dict_file(char *dict)
{
	int		fd;
	char	buf[BUF_SIZE];
	ssize_t	bytes_read;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buf, BUF_SIZE);
	if (bytes_read <= 0)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}
