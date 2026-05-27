/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 23:18:42 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/22 23:29:40 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	max;
	unsigned int	i;
	
	if (!len)
		return (0);
	max = *tab;
	i = 1;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>

int	main(void)
{
	int	int_tab[] = {-13, -5, -35, -23};
	printf("%d", max(int_tab, 4));
}
