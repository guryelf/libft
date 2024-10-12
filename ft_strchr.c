/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:55:09 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/12 17:54:10 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*val;

	val = 0;
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
