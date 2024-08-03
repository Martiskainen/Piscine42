/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartisk <mmartisk@student.hive.fi         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:35:52 by mmartisk          #+#    #+#             */
/*   Updated: 2024/07/16 14:35:54 by mmartisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*a;

	argc--;
	while (*argv[0])
	{
		a = argv[0]++;
		write(1, a, 1);
	}
	write(1, "\n", 1);
	return (0);
}
