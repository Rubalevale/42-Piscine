/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:47:13 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/10 12:01:35 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}
/*
int	main(void)
{
	char	myname[] = "Alejandro";

	printf("%d\n", ft_strlen(myname));
	return (0);
}
*/
