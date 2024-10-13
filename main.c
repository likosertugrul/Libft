#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "Likos";

    printf("%s, %s\n", name, surname);

    strlcat(name, surname, sizeof(name));

    printf("%s, %s", name, surname);
}
