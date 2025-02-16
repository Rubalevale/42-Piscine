/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:48:31 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/06 14:11:37 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	message[] = "0*2uasdabB";

	printf("%s", ft_strlowcase(message));
	return (0);
}
*/
