/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:33:13 by mmartisk          #+#    #+#             */
/*   Updated: 2024/06/27 12:38:22 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	if (a < 0)
	{
		write(1, &"N", 1);
	}
	else
	{
		write(1, &"P", 1);
	}
}