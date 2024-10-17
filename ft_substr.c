#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *new_str;
    
    if (!s)
        return NULL;
    size_t s_len = 0;
    s_len = ft_strlen(s);
    if (start >= s_len)
        return ft_strdup("");
    if (start + len > s_len)
        len = s_len - start;
    new_str = malloc(sizeof(char) * len + 1);
    if (!new_str)
        return NULL;
    size_t i = 0;
    while (i < len && s[start]) {
        new_str[i] = s[start];
        i++;
        start++;
    }
    new_str[i] = '\0';
    return new_str;
}
