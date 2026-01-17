/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:24:43 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/23 17:27:32 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 | octet << 4));
}

#include <stdio.h>

int	main(void)
{
	printf("%u\n", 0b01000001);
	printf("%u", swap_bits(0b01000001));
}
