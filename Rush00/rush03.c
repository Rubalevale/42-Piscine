/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:15:50 by ruchan            #+#    #+#             */
/*   Updated: 2025/01/26 19:13:23 by selkassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	head(int x, int y)
{
	int	abx;

	if (y > 0 && x > 0)
	{
		ft_putchar('A');
		abx = 1;
		while (abx <= x - 2)
		{
			ft_putchar('B');
			abx++;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	body(int x, int y)
{
	int	abx;
	int	aby;

	if (y > 2 && x > 0)
	{
		aby = 0;
		while (aby < y - 2)
		{
			ft_putchar('B');
			abx = 1;
			while (abx <= x - 2)
			{
				ft_putchar(' ');
				abx++;
			}
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
			aby++;
		}
	}
}

void	feet(int x, int y)
{
	int	abx;

	if (y > 1 && x > 0)
	{
		ft_putchar('A');
		abx = 1;
		while (abx <= x -2)
		{
			ft_putchar('B');
			abx++;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	head(x, y);
	body(x, y);
	feet(x, y);
}
