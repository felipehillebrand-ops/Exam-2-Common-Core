/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:02:29 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/12/02 17:48:14 by fjose-hi         ###   ########.fr       */
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
	int	start;
	int	end;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && ft_is_space(av[1][i]))
				i--;
			end = i;
			while (i >= 0 && !ft_is_space(av[1][i]))
                        	i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
