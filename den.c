#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    size_t i;

    // Eğer dstsize, dest'in uzunluğundan küçükse, direkt src uzunluğu ve dstsize'yi döndür
    if (dstsize <= dest_len)
        return (dstsize + src_len);

    // Dest'in sonuna src'yi kopyala, dstsize sınırını dikkate alarak
    i = 0;
    while (src[i] != '\0' && (dest_len + i) < (dstsize - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Null-terminator ekle
    dest[dest_len + i] = '\0';

    // Geriye src uzunluğu ve orijinal dest uzunluğu döndür
    return (dest_len + src_len);
}