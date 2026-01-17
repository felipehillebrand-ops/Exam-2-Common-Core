/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:30:18 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/23 17:48:41 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
        unsigned char	bits;

	i = 8;
        bits = 0;
	while (i--)
	{
		bits = (bits << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (bits);
}
/*
#include <stdio.h>

int     main(void)
{
	printf("%u\n", 0b01000001);
	printf("%u", reverse_bits(0b01000001));
}
*/

#include <stdio.h>

int	main(void)
{
	unsigned char	bit;
	unsigned char	res;
	int	i;

	bit = 0;
        res = reverse_bits((unsigned char)5);
	i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}
