/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 09:14:29 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 11:14:54 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x * x <= nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	prime_numb;
	int	non_prime;

	prime_numb = 11;
	non_prime = 4;

	printf("%d\n", ft_is_prime(prime_numb));
	printf("%d\n", ft_is_prime(non_prime));
	return (0);
}
*/
