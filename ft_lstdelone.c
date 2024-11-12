#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
    {
        return;
    }
    del(lst->content);
    free(lst);
}


#include <stdio.h>
#include "libft.h"

void delis(void *content)
{
    free(content);
}

// int main(void)
// {
//     char *s = ft_strdup("Lorem ipsum dolor sit amet");
//     t_list *first = ft_lstnew(s);
//     //char *t = ft_strdup("Lorem ipsum dolor sit amet");
//     //char *r = ft_strdup("Lorem ipsum dolor sit amet");
//     //t_list *second = ft_lstnew(t);
//     //t_list *third = ft_lstnew(r);

//     //ft_lstadd_back(&first, second);
//     //ft_lstadd_front(&first, third);

//     //ft_lstdelone(first, delis);

//     printf("%s \n", (char *)first->content);
//     //printf("%s \n", (char *)first->next->content);
//     //printf("%s \n", (char *)first->next->next->content);
//     return 0;
// }
