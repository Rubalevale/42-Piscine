/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:09:04 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/03 10:47:56 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	message[] = "Adelaide 42";
	int	count;

	count = ft_strlen(message);
	printf("Lenght of string:%d\n",count);
	return (0);
}
*/
