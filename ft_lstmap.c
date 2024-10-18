/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:03:09 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/18 18:21:05 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!new_lst)
		return (NULL);
	while (lst)
	{
		if (lst->content)
			new_lst->content = f(lst->content);
		else
			del(lst->content);
		new_lst->next = lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
