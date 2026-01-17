/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:53:56 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/22 22:07:28 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	num;

	num = 1;
	while (num <= n)
	{
		if (num == n)
			return  (1);
		num = num * 2;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", is_power_of_2(15));
}
