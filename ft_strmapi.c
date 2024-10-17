#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s)
        return NULL;
    char *new_str;
    int len = ft_strlen(s);
    new_str = malloc(sizeof(char) * (len + 1));
    if (!new_str)
        return NULL;
    int i = 0;
    while(s[i]){
        new_str[i] = f(i,s[i]);
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}