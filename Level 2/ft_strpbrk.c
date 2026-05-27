/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:02:47 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/22 18:14:54 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
                		return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strpbrk("testeeeee", "aseiou"));
}
