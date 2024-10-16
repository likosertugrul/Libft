#include <stdio.h>
#include "libft.h"
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char	x;
    unsigned char *s;
	x = (unsigned char)c;
    s = (unsigned char *)str;

    while (n--)
    {
        if (*s == x)
        {
            return (void *)s;
        }
        s++;
    }
    return NULL;
}

int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "Likos";
    char *result;
    char *sonuc;
    

    result = memchr(name, 'r', strlen(name));

    sonuc = ft_memchr(name, 'r', strlen(name));

    printf("%s, %ld\n", result, result - name);
    printf("%s, %ld\n", sonuc, sonuc - name);


}