/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguryel <fguryel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:55:09 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/11 21:54:39 by fguryel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i = 0;
    static char new_str[10000];
    if (s == NULL )
        return NULL;
    if (c < 0 || c > 127)
        return NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
        i++;
	}
    int p = 0;
    while (s[i] != '\0'){
        new_str[p] = s[i];
        p++;
        i++;
    }
    new_str[p] = '\0';
    return new_str;
}

int main(){

    char *str = "abc";
    int c = 'd';
    printf("%s",ft_strchr(str,c));
}