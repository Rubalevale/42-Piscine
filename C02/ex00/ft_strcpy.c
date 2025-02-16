/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:50:53 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/05 12:23:51 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char new_message[] = "Ruben";
	char og_message [] = "Hello"; //value will be replaced by message.

	printf("OG message:%s\n",og_message);
	printf("Copied string:%s\n",ft_strcpy(og_message,new_message));
	return (0);
}
*/
