#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
    {
        return 0;
    }
    while (lst->next != 0)
    {
        lst = lst->next;
    }
    return lst;
}


// #include <stdio.h>
// int main(void)
// {
//     char *s;
//     char *t;
//     char *r;

//     s = "Lorem ipsum dolor sit amet";
//     t = "Hello world";
//     r = "ertugrul likos";
//     t_list *head = ft_lstnew(s);
//     head->next = ft_lstnew(t);
//     head->next->next = ft_lstnew(r);

//     t_list *last = ft_lstlast(head);

//     printf("%s \n", (char *)last->content);

//     return 0;
// }
