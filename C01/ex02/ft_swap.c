/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:46:01 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/03 10:40:16 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	space;

	space = *a;
	*a = *b;
	*b = space;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;

	printf("Before swap: a = %d\tb = %d\n", a, b);
	ft_swap(&a,&b);
	printf("After swap: a = %d\tb = %d\n", a, b);
	return (0);
}
*/
