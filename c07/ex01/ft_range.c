/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:08:23 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/16 15:51:51 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arrayofints;
	int	len;

	if (min >= max)
		return NULL;
	len = 0;
	while (len < max - min)
		len++;
	arrayofints = (int *)malloc(sizeof(int) * len);
	len = 0;
	while (min < max)
	{
		arrayofints[len] = min;
		len++;
		min++;
	}
	
	return (arrayofints);
}

#include <stdio.h>

int	main()
{
	int	*des;
	int	i;
	
	des = ft_range(1, 5);
	i = 0;
	while (i < 5 - 1)
	{
		printf("%d", des[i]);
		i++;
	}
}
