/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 19:01:35 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/22 19:33:44 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	inter(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] &&  i < len)
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
	char	c;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (!inter(av[1], c, i) && inter(av[2], c, 2147483647))
				write(1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
