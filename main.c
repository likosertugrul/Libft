#include <stdio.h>
#include "libft.h"
#include <string.h>


#include <stdio.h>
#include <string.h>

int main (void)
{
    char *name;
    char *surname;
    char *name2;
    char *surname2;
    name = "Ertugrul";
    name2 = "Ertugrul";
    surname = strdup(name);
    surname2 = ft_strdup(name2);
    printf("%s, %s\n", name, surname);
    printf("%s, %s\n", name2, surname2);
}