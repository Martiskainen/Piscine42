/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.student.hi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:31:07 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/09 20:44:08 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nu)
{
	write(1, &nu, 1);
}

void	ft_putnbr(int nu)
{
	if (nu == -2147483648)
		write(1, "-2147483648", 11);
	else if (nu < 0)
	{
		ft_putchar('-');
		nu = nu * (-1);
		ft_putnbr(nu);
	}
	else if (nu < 10 && nu >= 0)
	{
		ft_putchar(nu + '0');
	}
	else
	{
		ft_putnbr(nu / 10);
		ft_putchar(nu % 10 + '0');
	}
}
