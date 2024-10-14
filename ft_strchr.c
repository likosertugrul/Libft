#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned char uc = (unsigned char)c;  // c'yi unsigned char olarak sakla

    // Dizi içinde dolaş
    while (*s)
    {
        if (*s == uc)  // Karakteri kontrol et
        {
            return (char *)s;  // Bulundu, döndür
        }
        s++;
    }

    // Eğer c, null terminatörse dizenin sonunu döndür
    if (uc == '\0')
    {
        return (char *)s;  // Dizenin sonu
    }

    return NULL;  // Bulunamadı
}
