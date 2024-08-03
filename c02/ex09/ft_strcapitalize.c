/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:25:28 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/11 20:33:31 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'z') && i == 0)
		str[i] = str[i] - 32;
	while (str[i] != 0)
	{
		count = check(str[i]);
		if (count == 0)
		{
			if (check(str[i + 1]) == 1)
				str[i + 1] = str[i + 1] - 32;
		}
		else if (count == 2)
		{
			if (check(str[i - 1]) != 0)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
