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
    char *res;
    char *son;
    name = "Ertugrul";
    name2 = "Ertugrul";
    surname = "gr";
    surname2 = "gr";

    res = strnstr(name, surname, sizeof(name));
    son = ft_strnstr(name2, surname2, sizeof(name2));
    printf("%s, %s, %s \n", name, surname, res);
    printf("%s, %s, %s \n", name2, surname2, son);
}