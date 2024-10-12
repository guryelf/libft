/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:25:13 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/12 21:27:36 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (str1 == (char *)0 || str2 == (char *)0)
		return (0);
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		if (*str1 == '\0')
			return (0);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
