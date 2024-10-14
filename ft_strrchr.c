#include "libft.h"

char *ft_strchr(char *s, int c)
{
    int i = 0;
    char *last;

    while (s[i])
    {
        if (s[i] == (char)c)
        {
            last = (char *)(s + i);
        }
        i++;
    }

    if (c == 0)
    {
        return (char *)(s + i);
    }
    return last;
}
