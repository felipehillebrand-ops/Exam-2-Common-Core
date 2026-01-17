/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:56:19 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/25 18:34:04 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	int_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	 n;
	int	len;
	char	*str;

	n = nbr;
	len = int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

#include <stdio.h>
int		main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;
	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;
	ft_itoa(number1);
	printf("%s\n", ft_itoa(number2));
	printf("%s\n", ft_itoa(number3));
	ft_itoa(number4);
	printf("%s\n", ft_itoa(number5));
	ft_itoa(number6);
    printf("%s\n", ft_itoa(number6));
	ft_itoa(number7);
	ft_itoa(number8);
	ft_itoa(number9);
	ft_itoa(number10);
	ft_itoa(number11);
	ft_itoa(number12);
	return (0);
}
