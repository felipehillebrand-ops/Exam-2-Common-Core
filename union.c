/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:33:32 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/21 15:50:32 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	seen_before(char *str, int max, char c)
{
	int	i;

	i = 0;
	while (i < max)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!seen_before(av[1], i, av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if (!seen_before(av[1], i, av[2][j]) && !seen_before(av[2], j, av[2][j]))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
