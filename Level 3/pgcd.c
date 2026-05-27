/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:17:34 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/25 16:31:28 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	num1;
	int	num2;
	int	i;
	int	pgcd; 

	i = 1;
	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		if (num1 > 0 && num2 > 0)
		{
			while (i <= num1 && i <= num2)
			{
				if (num1 % i == 0 && num2 % i == 0)
					pgcd = i;
				i++;
			}
			printf("%d", pgcd);
		}
	}
        printf("\n");
}
