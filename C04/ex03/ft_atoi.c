/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:40:32 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/11 15:28:16 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	index;
	int	sign_count;
	int	number;

	index = 0;
	number = 0;
	sign_count = 1;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
	{
		index++;
	}
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			sign_count *= -1;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	return (number * sign_count);
}
/*
int	main(void)
{
	//neg if odd -, pos if even -;
	char	value[] = "	---+---+1234ab567";

	printf("%d\n",ft_atoi(value));
	return (0);
}
*/
