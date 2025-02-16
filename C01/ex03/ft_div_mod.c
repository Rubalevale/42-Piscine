/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:06:55 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/03 10:41:22 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 1001;
	b = 43;
	div = 0;
	mod = 0;

	ft_div_mod(a,b,&div,&mod);
	printf("Result:%d\n",div);
	printf("Result:%d\n",mod);
	return (0);
}
*/
