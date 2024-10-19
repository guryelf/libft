/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a90530 <a90530@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:08:31 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/19 21:56:32 by a90530           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst){
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp -> next)
		temp = temp->next;
	temp->next = new;
}
