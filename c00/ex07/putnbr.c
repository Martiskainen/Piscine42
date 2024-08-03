/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:51:54 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/09 20:25:26 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0 && nb < 10)
	{
		print = nb + '0';
		write(1, &print, 1);
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
}
