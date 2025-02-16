/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:40:17 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/12 17:47:32 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 0)
	{
		return (index);
	}
	if (index >= 2)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 4;
	printf("%d\n",ft_fibonacci(nb));
	return (0);
}
*/
