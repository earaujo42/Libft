/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earaujo <earaujo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:37 by earaujo           #+#    #+#             */
/*   Updated: 2023/12/28 17:12:40 by earaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/list.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*current;

	if (!*lst)
	{
		*lst = n;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = n;
}
