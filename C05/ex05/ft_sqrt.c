/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:51:03 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 09:13:15 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	numb;
	int	x;

	numb = 1;
	while (nb >= 0)
	{
		x = numb * numb;
		if (x == nb)
			return (numb);
		else if (numb >= nb)
			return (0);
		numb++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	w_sqrt;
	int	wo_sqrt;

	w_sqrt = 16;
	wo_sqrt = 3;
	printf("%d\n",ft_sqrt(w_sqrt));
	printf("%d\n",ft_sqrt(wo_sqrt));
	return (0);
}
*/
