/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:13:01 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/13 14:14:57 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	main(int argc, char *argv[])
{
	int	len;

	len = ft_len(argv[0]);
	argv[0][len] = '\n';
	write(1, argv[0], len + 1);
	return (argc);
}
