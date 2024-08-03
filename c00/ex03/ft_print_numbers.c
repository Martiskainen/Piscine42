/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:08:12 by mmartisk          #+#    #+#             */
/*   Updated: 2024/06/27 12:45:06 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_operation(char a)
{
	write(1, &a, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_operation(i + '0');
		i++;
	}
}
