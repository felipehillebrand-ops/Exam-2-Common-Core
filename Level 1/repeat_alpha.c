/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:33:21 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/19 22:13:46 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{		
			repeat = letter_count(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}		
	write(1, "\n", 1);
	return (0);
}
