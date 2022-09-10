/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcatalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:25:16 by tcatalan          #+#    #+#             */
/*   Updated: 2022/09/10 15:06:31 by viburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int i, int x, int y);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y < 0 || x < 0)
	{
		i = y;
	}
	else if (x == 1 && y == 1)
		write (1, "o\n", 2);
	else
	{
		while (i < y)
		{
			if (x == 1)
				write(1, "o\n", 2);
			else
				ft_putchar(i, x, y);
			i++;
		}
	}
}
