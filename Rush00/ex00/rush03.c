/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:22:26 by mmartisk          #+#    #+#             */
/*   Updated: 2024/06/30 14:42:17 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int col, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if ((i == 0 || i == row - 1) && j == 0)
				ft_putchar('A');
			else if ((i == 0 || i == row - 1) && j == col - 1)
				ft_putchar('C');
			else if (i > 0 && i < row - 1 && j > 0 && j < col - 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
