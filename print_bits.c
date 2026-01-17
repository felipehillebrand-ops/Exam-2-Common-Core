/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:28:42 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/23 16:38:47 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bits;

	i = 8;
	bits = 0;
	while (i--)
	{
		bits = (octet >> i & 1) + 48;
		write (1, &bits, 1);
	}
}

int	main(void)
{
	unsigned char	octet;

	octet = 3;
	print_bits(octet);
}
