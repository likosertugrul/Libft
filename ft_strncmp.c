#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "Likos";
    int a = strncmp(name, surname, 3);
    printf("%d", a);
}