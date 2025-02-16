/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:21:23 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/03 11:37:26 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	position;
	int	space;

	position = 0;
	while (position < size / 2)
	{
		space = tab[position];
		tab[position] = tab[size - 1 - position];
		tab[size - 1 - position] = space;
		position++;
	}
}
