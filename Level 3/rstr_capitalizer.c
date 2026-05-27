/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:06:07 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/23 19:34:33 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	r_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' && (ft_isspace(s[i + 1]) || s[i + 1] == '\0'))
                        s[i] -= 32;
		if (s[i] >= 'A' && s[i] <= 'Z' && !ft_isspace(s[i + 1]) && s[i + 1] != '\0')
			s[i] += 32;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (i < ac)
		{
			r_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}

