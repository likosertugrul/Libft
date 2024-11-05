#include "libft.h"

int main(void)
{
    char *s;
    char *p;
    s = "Lorem ipsum dolor sit amet";
    p = "ertugrukl lkişkasdf";
    t_list *new;
    t_list *last;
    new = ft_lstnew(s);
    last = ft_lstnew(p);
    ft_lstadd_front(&new, last);
    int a = ft_lstsize(new);

    printf("%s \n", (char *)new->content);
    printf("%s \n", (char *)new->next->content);
    printf("%d \n", a);
    return 0;
}
