/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:05:53 by mluis             #+#    #+#             */
/*   Updated: 2024/11/27 17:44:42 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = argc;
	while (j > 1)
	{
		while (argv[j - 1][i] != '\0')
		{
			ft_putchar(argv[j - 1][i]);
			i ++;
		}
		i = 0;
		j--;
		ft_putchar('\n');
	}
	return (0);
}
