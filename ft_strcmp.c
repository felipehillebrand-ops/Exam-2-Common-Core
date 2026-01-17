/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:18:46 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/20 17:38:43 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 || *s2))
	{
			s1++;
			s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>

int	main(void)
{
	char	*t1;
	char	*t2;
	int	d;

	t1 = "Felipe eh fodaa";
	t2 = "Felipe eh fodao";
	d = ft_strcmp(t1, t2);
	printf("%d\n", d);
	return (0);
}
