/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:06:11 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/12/03 16:21:23 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	i = 1;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", lcm(10, 20));
}
