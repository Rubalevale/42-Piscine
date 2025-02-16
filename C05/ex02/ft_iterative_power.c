/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:25:08 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/12 13:41:51 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	powr_count;

	n = 1;
	powr_count = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (powr_count <= power)
	{
		n *= nb;
		powr_count++;
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	int	numb;
	int	powr;

	numb = 3;
	powr = 7;
	printf("%d\n",ft_iterative_power(numb, powr));
	return (0);
}
*/
