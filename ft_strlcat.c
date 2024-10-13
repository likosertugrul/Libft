#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t i = 0;
    if (dest[i] == 0)
    {
        while (i < dstsize)
        {
            dest[i] = src[i];
            i++;
        }

    }
    return i;
}