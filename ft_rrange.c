/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:28:13 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/24 16:03:53 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	i;
	int	size;
	int	*array;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	if (start <= end)
	{
		while (i < size)
		{
			array[i] = end - i;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			array[i] = end + i;
			i++;
		}
	}
	return (array);
}

#include <stdio.h>

int     main(void)
{
        int     start;
        int     end;
        int     *range;
        int     size;
        int     i;

        start = 0;
        end = -3;
        range = ft_rrange(start, end);
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
