/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:32:56 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/11 13:35:34 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *tofind)
{
	int		index_str;
	int		index_find;

	index_str = 0;
	index_find = 0;
	if (tofind[0] == '\0')
	{
		return (str);
	}
	while (str[index_str] != '\0')
	{
		index_find = 0;
		while (tofind[index_find] == '\0'
			|| str[index_str + index_find] == tofind[index_find])
		{
			if (tofind[index_find] == '\0')
			{
				return (&str[index_str]);
			}
			index_find++;
		}
		index_str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	sentence[] = "Where is my best friend Waldo? He is hiding!.";
	char	word_to_find[] = "Waldo";

	printf("%s\n", sentence);
	printf("%s\n", ft_strstr(sentence, word_to_find));
	return (0);
}
*/
