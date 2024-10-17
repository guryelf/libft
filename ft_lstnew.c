#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_list;

    new_list = malloc(sizeof(t_list));
    if(new_list == NULL)
        return NULL;
    new_list -> next = NULL;
    new_list -> content = content;

    return (new_list);
}