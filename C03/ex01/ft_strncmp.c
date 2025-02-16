/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:29:58 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/12 12:29:49 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n < 1)
	{
		return (0);
	}
	while (index < n && s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	if (index < n)
	{
		return (s1[index] - s2[index]);
	}
	return (0);
}
/*
int	main(void)
{
	char	word1[] = "RU";
	char	word2[] = "RU";
	char	word3[] = "RUB";
	char	word4[] = "";
	char	word5[] = "RA";
	unsigned int	num;

	num = 2;

	printf("%d\n", ft_strncmp(word1, word2, num)); //0
	printf("%d\n", ft_strncmp(word1, word3, num)); //-
	printf("%d\n", ft_strncmp(word1, word4, num)); // non vs empty
	printf("%d\n", ft_strncmp(word4, word3, num)); // empty vs non
	printf("%d\n", ft_strncmp(word4, word5, num)); // all empty
	printf("%d\n", ft_strncmp(word3, word1, num)); // 
	return (0);
}
*/
