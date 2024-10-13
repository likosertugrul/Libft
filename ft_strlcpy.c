#include <stdio.h>
#include <string.h>
#include "libft.h"



size_t ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t i = 0;
    int len = ft_strlen(src);
    if (dstsize== 0)
    {
        return len;
    }
    while (i < (dstsize - 1))
    {
        dest[i] = src[i];
        i++;
    }
    while (dest[i] != 0)
    {
        dest[i] = 0;
        i++;
    }
    return len;
}

int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "Likos";

    ft_strlcpy(name, surname, 0);

    printf("%s \n%s", name, surname);
}