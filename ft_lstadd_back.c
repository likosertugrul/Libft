#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;
    if (*lst == NULL)
    {
        *lst = new;
    }
    else
    {
        ptr = *lst;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
        
    }
}

// #include <stdio.h>
// #include "libft.h"
// int main(void)
// {
//     char *s;
//     char *t;
//     char *r;
//     s = "lorem ipsum dolor sit amet";
//     t = "ertugrul likos";
//     r = "hello world";
//     t_list *first = ft_lstnew(s);
//     t_list *second = ft_lstnew(t);
//     t_list *third = ft_lstnew(r);

//     first->content = s;
//     second->content = t;
//     third->content = r;

//     ft_lstadd_back(&first, second);
//     ft_lstadd_front(&first, third);

//     printf("%s \n", (char *)first->content);
//     printf("%s \n", (char *)first->next->content);
//     printf("%s \n", (char *)first->next->next->content);




// }
