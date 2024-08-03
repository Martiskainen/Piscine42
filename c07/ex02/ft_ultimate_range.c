/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:28:07 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/18 13:55:27 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arrayofints;
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	len = 0;
	while (len < max - min)
		len++;
	arrayofints = (int *)malloc(sizeof(int) * len);
	*range = arrayofints;
	i = 0;
	while (i < len)
	{
		arrayofints[i] = min;
		i++;
		min++;
	}
	return (len);
}
