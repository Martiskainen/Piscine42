/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:58:39 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/09 19:03:15 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && k < nb)
	{
		dest[i + j] = src [j];
		j++;
		k++;
	}
	if (nb != 0)
		dest[i + j] = '\0';
	return (dest);
}
