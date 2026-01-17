/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:56:38 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/11/26 23:00:55 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		if (begin_list->data)
			(*f)(begin_list->data)
		begin_list = begin_list->next;
	}
}
