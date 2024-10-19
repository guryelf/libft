/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a90530 <a90530@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:22:42 by fguryel           #+#    #+#             */
/*   Updated: 2024/10/19 22:15:51 by a90530           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_null_strings(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	return (NULL);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *s;
	char *result;
    size_t  len1;
    size_t  len2;
    size_t  i;
    size_t  j;

    result = handle_null_strings(s1, s2);
    if (result != NULL)
        return (result);
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    
    s = malloc(sizeof(char) * (len1 + len2 + 1));
    if (s == NULL)
        return (NULL);
        
    i = 0;
    while (i < len1)
    {
        s[i] = s1[i];
        i++;
    }
    
    j = 0;
    while (j < len2)
    {
        s[i + j] = s2[j];
        j++;
    }
    
    s[i + j] = '\0';
    return (s);
}