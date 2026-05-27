/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:08:50 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/30 19:08:13 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    **ft_split(char *str)
{
	int	i;
	int	j;
	int	w;
	int	k;
	int	x;
	char	**r;

	i = 0;
	j = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
		{
			w++;
			while (str[i] && str[i] != ' ' && str[i] != '\t' &&  str[i] != '\n')
				i++;
		}
	}
	r = (char **)malloc(sizeof(char *) * (w + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (j < w)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                        i++;
		k = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' &&  str[i] != '\n')
                	i++;
		r[j] = malloc(i - k + 1);
	       	if (!r[j])
			return (NULL);
		x = 0;
		while (k < i)
		{
			r[j][x] = str[k];
			x++;
			k++;
		}
		r[j][x] = '\0';
		j++;
	}
	r[w] = NULL;
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*ssplit;
	char	**vsplit;

	ssplit = "  Brilho da asa azulada da arara azul";
	vsplit = ft_split(ssplit);
	while (*vsplit)
	{
		printf("%s\n", *vsplit);
		vsplit++;
	}
	return (0);
}
*/
