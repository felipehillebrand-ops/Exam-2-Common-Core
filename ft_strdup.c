/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:55:13 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/20 16:27:44 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*s;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
}
*/
