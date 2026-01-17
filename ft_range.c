/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:09:01 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/24 15:24:36 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*array;

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
			array[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			array[i] = start - i;
			i++;
		}
        }
	return (array);
}

#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	*range;
	int	size;
	int	i;

	start = 0;
	end = -3;
	range = ft_range(start, end);
	if (!range)
		return (1);
	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
