/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:09:55 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/11 14:24:38 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index_src;	

	dest_len = 0;
	src_len = 0;
	index_src = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (src[index_src] != '\0' || dest_len < size -1)
	{
		dest[dest_len] = src[index_src];
		dest_len++;
		index_src++;
	}
	dest[dest_len] = '\0';
	return (dest_len - index_src + src_len);
}
/*
int	main(void)
{
	char	source[10] = ", World";
	char	destination[12] = "Hello123";
	
	printf("%d\n", ft_strlcat(destination, source, 10));
	printf("%s\n", destination);
	return (0);
}
*/
