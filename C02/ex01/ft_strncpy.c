/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:19:29 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/06 13:30:28 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n && src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Ruben";
	char	dest[13];

	ft_strncpy(dest, src, 12);
	dest[12] = '\0';
	printf("Copied string: %s\n", dest);
	return (0);
}
*/
