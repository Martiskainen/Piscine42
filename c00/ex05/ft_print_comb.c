/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:48:10 by mmartisk          #+#    #+#             */
/*   Updated: 2024/06/27 14:55:14 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_operation(char x)
{	
	write(1, &x, 1);
}

void	print_format(char a, char b, char c)
{
	print_operation(a + '0');
	print_operation(b + '0');
	print_operation(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	print_operation(',');
	print_operation(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_format(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
