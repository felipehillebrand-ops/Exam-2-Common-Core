/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:03:30 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/21 17:59:25 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;
    
	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
        	{
			if (s[i] == reject[j])
		            	return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	const char	*str;
	const char	*reject;
	size_t	result;

	str = "hello world";
	reject = "ow";
	result = ft_strcspn(str, reject);
	printf("String: \"%s\"\n", str);
	printf("Reject: \"%s\"\n", reject);
	printf("Resultado (pos do primeiro caractere proibido): %zu\n", result);
	return (0);
}
