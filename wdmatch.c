/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 19:55:18 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/22 20:15:44 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	const char *s1;
        const char *s2;
	int	len;
	int	i;

	s1 = av[1];
        s2 = av[2];
	len = 0;
	i = 0;
	if (ac == 3)
	{
		while (s1[len])
			len++;
		while (i < len && *s2)
        	{
			 if (s1[i] == *s2)
                		i++;
			 s2++;
		}
		if (i == len)
			write(1, s1, len);
	}
	write(1, "\n", 1);
	return (0);
}
