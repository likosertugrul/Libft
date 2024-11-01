#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *) malloc(sizeof(t_list));
    if (!new)
        return 0;

    new->content = content;
    new->next = NULL;
    return new;
}


// int main(void)
// {
//     char *s = "Lorem ipsum dolor sit amet";
//     t_list *node;
    
//     node = ft_lstnew((void *)s);
//     printf("%s \n", (char *)(node->content));
//     node->next = ft_lstnew((void *)s);
//     printf("%s \n", (char *)(node->next->content));
//     node->next->next = ft_lstnew((void *) s);
//     printf("%s \n", (char *)(node->next->next->content));


//     return 0;
// }