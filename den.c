#include "libft.h"
#include <stdio.h>

void add_front(t_list **lst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int main(int argc, char const *argv[])
{
	char *s = "Lorem ipsum dolor sit amet";
	char *str = "Ertugrul Likos";
	t_list *node;
	t_list *new_node;
	node = ft_lstnew((void *)s);
	printf("%s \n", (char *)node->content);
	node->next = ft_lstnew((void *)s);
	printf("%s \n", (char *)node->next->content);
	new_node = ft_lstnew((void *)str);
	add_front(&node, new_node);
	printf("%s \n", (char *)node->content);

	return 0;
}
