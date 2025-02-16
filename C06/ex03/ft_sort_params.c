/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:14:14 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 18:02:36 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	icmp;

	icmp = 0;
	while (s1[icmp] || s2[icmp])
	{
		if (s1[icmp] != s2[icmp])
			return(s1[icmp] - s2[icmp])
		i++;
	}
	return (0);
}

void	swap(char *a, char *b)
{
	char	temp;

	temp = a*;
	a* = b*
	b* = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc < 2)
		return (0);
	while (i < argc)
	{

		write(1, argv[i], ft_strcmp(argv[i], "") + 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
