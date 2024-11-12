#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *p;
    if (lst == NULL || del == NULL)
    {
        return;
    }
    while (*lst != NULL)
    {
        p = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = p;
    }
    *lst = NULL;
}


// #include <stdio.h>
// #include "libft.h"

// void delete_data(void *data)
// {
//     free(data);
// }

// int main(void)
// {
//     char *s;
//     //char *t;
//     //char *r;

//     s = ft_strdup("Lorem ipsum dolor sit amet");
//     //t = "ertugrul likos";
//     //r = "hello world";

//     t_list *first = ft_lstnew(s);
//     printf("%s \n", (char *)first->content);
//     ft_lstclear(&first, delete_data);
//     printf("%s \n", (char *)first->content);
//     return 0;
// }
