/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:31:00 by mluis             #+#    #+#             */
/*   Updated: 2024/11/27 09:35:51 by mluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	return (result);
}
