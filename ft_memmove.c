#include <stdio.h>
#include <string.h>

void *ft_memmove(const void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    size_t i = 0;
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
    return d;

}
int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "Likos";
    ft_memmove(name,surname, 2);

    printf("%s, %s, \n", name, surname);
}