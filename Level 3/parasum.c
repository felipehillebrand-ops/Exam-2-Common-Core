/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:02:09 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/24 22:06:25 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char num;

	if (n >= 10)
		ft_putnbr(n / 10);
	num = n % 10 + '0';
	write(1, &num, 1);
}

int	main(int ac, char **av)
{
	(void) av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
