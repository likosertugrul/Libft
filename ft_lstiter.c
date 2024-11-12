#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (f == NULL)
    {
        return;
    }

    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
    
}

// #include "libft.h"

// void plusone(void *content)
// {
//     char *s = (char *)content;

//     int i = 0;
//     while (s[i])
//     {
//         s[i] = s[i] + 1;
//         i++;
//     }
// }

// int main(void)
// {
//     // Dinamik bellek ayırarak stringleri kopyalayalım
//     char *s = ft_strdup("Lorem ipsum dolor sit amet");
//     char *t = ft_strdup("ertugrul likos");
//     char *r = ft_strdup("hello world");

//     // Her düğüm için yeni liste düğümleri oluştur
//     t_list *first = ft_lstnew(s);
//     t_list *second = ft_lstnew(t);
//     t_list *third = ft_lstnew(r);

//     // Listenin sonuna ve başına düğümleri ekle
//     ft_lstadd_back(&first, second);
//     ft_lstadd_back(&first, third);

//     // Listenin her elemanına plusone fonksiyonunu uygula
//     ft_lstiter(first, plusone);

//     // Sonuçları yazdır
//     printf("%s\n", (char *)first->content);
//     printf("%s\n", (char *)first->next->content);
//     printf("%s\n", (char *)first->next->next->content);

//     // Belleği serbest bırak
//     free(s);
//     free(t);
//     free(r);

//     return 0;
// }