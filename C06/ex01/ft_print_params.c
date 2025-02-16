/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:23:43 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 16:02:15 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
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

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		ft_print_params(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
