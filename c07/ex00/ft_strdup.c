/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:00:13 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/16 15:07:29 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	duplicate = (char *)malloc(len + 1);
	duplicate[len] = 0;
	while ((len - 1) >= 0)
	{
		len--;
		duplicate[len] = src[len];
	}
	return (duplicate);
}
