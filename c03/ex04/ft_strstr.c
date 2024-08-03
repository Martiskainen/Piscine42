/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:26:50 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/11 15:56:32 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		sum;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			sum = i + j;
			while (str[sum] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
				sum++;
			}
		}
		i++;
	}
	return (0);
}
