#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strchr(char *s, int c)
{
    int i = 0;
    char *str = (char *)s;
    while (str[i] != c)
    {
        str[i] = 0;
        i++;
    }
    return str;
}

int main(void)
{
    char name[20] = "Ertugrul";

    printf("%s \n", name);
}