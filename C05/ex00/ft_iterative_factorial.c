/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:47:20 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/12 13:05:52 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	int	numb;

	numb = -1;
	printf("%d\n", ft_iterative_factorial(numb));
	return (0);
}
*/
