/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:58:14 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/21 16:48:33 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = atoi(av[1]);
	b = atoi(av[3]);
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", a + b);
		else if (av[2][0] == '-')
			printf("%d", a - b);
		else if (av[2][0] == '*')
                        printf("%d", a * b);
		else if (av[2][0] == '/')
                        printf("%d", a / b);
		else if (av[2][0] == '%')
                        printf("%d", a % b);
	}
	printf("\n");
	return (0);
}
