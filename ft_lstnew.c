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


int main(void)
{
    char *content = "Lorem ipsum dolor sit amet";
    t_list *node =ft_lstnew((void *)content);

    if (node)
    {
        printf("Düğüm oluşturuldu \n");
        printf("İçerik : %s \n", (char *)node->content);
        printf("Next : %p \n", node->next);
    }
    else
    {
        printf("Pov patladin");
    }
    free(node);
    return 0;
}