/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:31:27 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/06 14:13:37 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	pos;

	pos = 0;
	if (str[pos] == '\0')
	{
		return (1);
	}
	while (str[pos])
	{	
		if (!(str[pos] >= '0' && str[pos] <= '9'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("Ruben"));
	printf("%d\n", ft_str_is_numeric("123"));
	printf("%d\n", ft_str_is_numeric("r123"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
*/
