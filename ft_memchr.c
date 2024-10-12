/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:52:57 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/12 19:00:13 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	*val;
	size_t	i;

	str = (char *)s;
	val = 0;
	if (str == NULL)
		return (NULL);
	if (c > 255)
		return ((char *)s);
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
