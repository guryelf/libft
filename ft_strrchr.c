/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:50:13 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/12 17:53:32 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
			val = (char *)s;
	}
	return (val);
}
