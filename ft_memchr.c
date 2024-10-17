/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a90530 <a90530@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:52:57 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/14 17:42:49 by a90530           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	*val;
	size_t	i;
	
	if (s == NULL)
		return (NULL);
	str = (char *)s;
	val = NULL;
	i = 0;
	while (i < n)
	{
		if (*str == c)
		{
			val = (char *)str;
			break ;
		}
		str++;
		i++;
	}
	return (val);
}
