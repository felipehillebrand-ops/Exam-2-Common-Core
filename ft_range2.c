/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:47:22 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/12/03 17:42:16 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)

	int	i;
	int	size;
	char	*array;

	i = 0;
	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	if (start <= end)
	{
		while (i < size)
		{
			array[i] = size + i;
			i++;
		}
	}
	else
	{
		while (i < size)
                {       
                        array[i] = size - i;
                        i++;
                }
	}
	return (array);
}
