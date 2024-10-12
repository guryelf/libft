/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:29:42 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/12 22:18:33 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(int reverse, char *dest, char *src, size_t len)
{
	size_t	i;

	if (reverse == 0)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdest;

	csrc = (char *)src;
	cdest = (char *)dst;
	if (cdest < csrc)
		ft_strcpy(1, cdest, csrc, len);
	else
		ft_strcpy(0, cdest, csrc, len);
	return (cdest);
}
