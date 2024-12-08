/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:18:46 by mluis             #+#    #+#             */
/*   Updated: 2024/12/07 23:18:50 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

#define BUF_SIZE 4096

/// @brief retrieves the file size of the file
/// @param str file path to read
/// @return returns the size of the file (no. of bytes)
ssize_t	file_size(char *file)
{
	ssize_t	bytes_read;
	char	buffer[BUF_SIZE];
	int		fd;

	fd = open(file, O_RDONLY);
	bytes_read = read(fd, buffer, BUF_SIZE);
	close (fd);
	return (bytes_read);
}

/// @brief reads a file and returns the contents in the file as a string
/// @param str file path to read
/// @return str read from the file
char	*file_read(char *file)
{
	int		fd;
	char	*buffer;
	ssize_t	bytes_read;

	bytes_read = file_size(file);
	if (bytes_read == -1)
	{
		ft_error("Error");
		return (NULL);
	}
	fd = open(file, O_RDONLY);
	buffer = (char *)malloc(bytes_read);
	bytes_read = read(fd, buffer, bytes_read);
	if (bytes_read == -1)
	{
		ft_error("Error\n");
		close(fd);
		return (NULL);
	}
	close(fd);
	return (buffer);
}
