#include "libft.h"

int main(void)
{
	char *content = "Lorem ipsum dolor sit amet";

	t_list *node = ft_lstnew((void *)content);

	if (node)
	{
		printf("Düğüm oluşturuldu \n");
		printf("İçerik: %s \n", (char *)node->content);
		printf("Next: %p\n", node->next);
	}
	else
	{
		printf("Bellek ayırımı patladı");
	}

	free(node);
	return 0;
}