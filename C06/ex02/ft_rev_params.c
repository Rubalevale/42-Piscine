/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:15:09 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 16:11:01 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc < 2)
		return (0);
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
