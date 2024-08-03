/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:26:22 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/16 14:31:09 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			c = argv[i][j] + 0;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
