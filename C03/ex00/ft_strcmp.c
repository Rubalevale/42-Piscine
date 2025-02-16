/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:48:35 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/07 11:03:14 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0' && s2[index] != '\0'))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
int	main(void)
{
	char	string1[] = "ABC";
	char	string2[] = "ABC";
	char	string3[] = "xyz";

	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", ft_strcmp(string2, string3));
	return (0);
}
*/
