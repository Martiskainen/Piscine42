/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:33:10 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/16 14:26:49 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (0);
}

void	sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	j = 1;
	while (j < argc)
	{
		i = argc - 1;
		while (i > 0)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				tmp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = tmp;
			}
			i--;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			c = argv[i][j] + 0;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
