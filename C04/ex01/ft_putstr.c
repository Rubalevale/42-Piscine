/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:03:01 by ruchan            #+#    #+#             */
/*   Updated: 2025/02/10 12:09:30 by ruchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}	
}
/*
int	main(void)
{
	char	phone[] = "Poco X4";

	ft_putstr(phone);
	return (0);
}
*/
