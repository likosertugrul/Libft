#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
    {
        return;
    }

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}










#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void to_uppercase(unsigned int i, char *c)
{
    (void)i; // Bu fonksiyon index değerini kullanmıyor, o yüzden ignored ediyoruz
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c + 13; // Küçük harfi büyük harfe çeviriyoruz
    }
}

int main(void)
{
    char str[] = "LbeX` \\cfh` Wb_be f\\g T`Xg"; // Orijinal string

    printf("Before: %s\n", str); // İşlem öncesi stringi yazdır
    ft_striteri(str, to_uppercase); // Tüm karakterleri büyük harfe çevir
    printf("After: %s\n", str); // İşlem sonrası stringi yazdır

    return 0;
}
