/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:22:42 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/11 19:41:32 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_null_strings(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		return ((char *)s2);
	}
	if (s2 == NULL)
	{
		return ((char *)s1);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		j;
	int		c;
	char	*result;
	int		size;

	result = handle_null_strings(s1, s2);
	if (result != NULL)
		return (result);
	size = sizeof(s1) + sizeof(s2);
	s = malloc(size);
	if (s == NULL)
		return (NULL);
	j = 0;
	c = 0;
	while (s1[j] != '\0')
		s[c++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		s[c++] = s2[j++];
	s[c] = '\0';
	return (s);
}
