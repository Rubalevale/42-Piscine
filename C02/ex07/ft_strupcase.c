/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:48:31 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/05 13:01:50 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	message[] = "0*2rubB";

	printf("%s", ft_strupcase(message));
	return (0);
}
*/
