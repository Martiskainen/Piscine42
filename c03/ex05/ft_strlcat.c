/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:41:59 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/17 19:53:20 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[j] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}
