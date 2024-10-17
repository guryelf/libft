/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a90530 <a90530@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:55:09 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/17 13:30:11 by a90530           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*val;

	val = NULL;
	if (s == NULL)
		return (NULL);
	if (c > 255)
		return ((char *)s);
	while (*s++)
	{
		if (*s == c)
		{
			val = (char *)s;
			break ;
		}
	}
	return (val);
}
