#include "libft.h"


static int	ft_findchr(const char *s, int c)
{
	if (s == NULL)
		return (0);
    int i ;

    i = 0;
	while (s[i])
    {
        if (c == s[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trimmed;

    if (!s1)
        return (NULL);
    if (!set)  
        return (ft_strdup(s1));

    start = 0;
    while (ft_findchr(set,s1[start]) != 0)
        start++;

    end = ft_strlen(s1) - 1; 

    while (end > start && (ft_findchr(set, s1[end])) != 0)
        end--;

    if (start > end)
        return (ft_strdup(""));

    trimmed = ft_substr(s1, start, end - start + 1);
    return (trimmed);
}
