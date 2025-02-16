/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:17:07 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/10 15:19:56 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_dest;
	unsigned int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while ((index_src < nb) && (src[index_src] != '\0'))
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	name[20] = "Ruben";
	char	middle[20] = "Alejandro";
	char	last[10] = "Chan";

	ft_strncat(name, middle, 3);
	ft_strncat(middle, last, 2);
	printf("%s\n", name);
	printf("%s\n", middle);
	return (0);
}
*/
