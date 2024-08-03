/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.student.hi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:01:26 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/14 20:57:51 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	count = nb;
	while (count > 1)
	{
		nb = nb * (count - 1);
		count--;
	}
	return (nb);
}
