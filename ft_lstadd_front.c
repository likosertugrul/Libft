#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
    {
        return;
    }
    new->next = *lst;
    *lst = new;
}

// int main(void)
// {
//     char *s1;
//     char *s2;
//     s1 = "Lorem ipsum dolor sit amet";
//     s2 = "Ertugrul Likos";

//     t_list *first;
//     t_list *second;

//     first = ft_lstnew(s1);
//     printf("%s \n", (char *)first->content);
//     second = ft_lstnew(s2);
//     ft_lstadd_front(&first, second);
//     printf("%s \n", (char *)first->content);
//     printf("%s \n", (char *)first->next->content);



//     return 0;
// }
