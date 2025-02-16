/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:07:49 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/12 17:15:18 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	numb;
	int	powr;

	numb = 3;
	powr = 3;
	printf("%d\n",ft_recursive_power(numb,powr));
	return (0);
}
*/
