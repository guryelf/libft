/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:10:43 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/12 20:16:16 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (haystack == NULL)
		return (NULL);
	else if (needle == NULL)
		return ((char *)(haystack));
	else if (*needle == '\0' || *haystack == '\0')
		return ((char *)(haystack));
	while (i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			if (haystack[i + j] == '\0')
				break ;
			j++;
		}
		i++;
	}
	return (NULL);
}
