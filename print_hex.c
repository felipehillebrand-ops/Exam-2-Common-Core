/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:20:03 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/24 22:50:30 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hex(int n)
{
	char str[] = "0123456789abcdef";
	
	if (n >= 16)
		put_hex(n / 16);
	write(1, &str[n % 16], 1);
}

int	main(int ac, char **av)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			result = (result * 10) + av[1][i] - '0';
			i++;
		}
		put_hex(result);
	}
	write(1, "\n", 1);
	return (0);
}
