/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:15:56 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 11:45:43 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	x;
	int	next_prime;

	x = 2;
	if (nb < 2)
		return (0);
	while (x * x <= nb)
	{
		if (nb % x != 0)
		{
			next_prime = x;
			x++;
		}
		else
		{
			return (ft_find_next_prime(nb + 1));
		}
		x++;
	}
	return (next_prime);
}

#include <stdio.h>

int	main(void)
{
	int	numb;

	numb = 5;
	printf("%d\n",ft_find_next_prime(numb));
	return (0);
}
