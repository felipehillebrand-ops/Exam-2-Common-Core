/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:32:07 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/12/01 21:01:22 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac >= 2)	
	{
		while (av[1][i] && ft_is_space(av[1][i]))
			i++;
		j = i;
		while (av[1][i])
		{
			while (av[1][i] && !ft_is_space(av[1][i]))
				i++;
			while (av[1][i] && ft_is_space(av[1][i]))
                                i++;
			while (av[1][i] && !ft_is_space(av[1][i]) && ft_is_space(av[1][i - 1]))
			{
				while (av[1][i] && !ft_is_space(av[1][i]))
				{
					write(1, &av[1][i], 1);
					i++;
				}
				write(1, " ", 1);
				i++;
			}
		}
		while (av[1][j] && !ft_is_space(av[1][j]))
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
