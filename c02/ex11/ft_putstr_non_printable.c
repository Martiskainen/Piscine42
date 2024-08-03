/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:57:21 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/17 15:32:30 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char str)
{
	unsigned char	a;
	unsigned char	b;

	if (str < 32 || str > 126)
	{
		if (str < 10)
		{
			write(1, "\\", 1);
			a = str / 16 + 48;
			write(1, &a, 1);
			b = str % 16 + 48;
			write(1, &b, 1);
		}
		else
		{
			write(1, "\\", 1);
			a = str / 16 + 48;
			write(1, &a, 1);
			b = str % 16 + 55 + 32;
			write(1, &b, 1);
		}
	}
	else
		write(1, &str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
