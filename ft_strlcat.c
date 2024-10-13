#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    size_t len;

    i   = 0;
    len = ft_strlen(src);

    while (i < len)
    {
        dest[dstsize] = src[i];
        i++;
    }

    return i;
}

