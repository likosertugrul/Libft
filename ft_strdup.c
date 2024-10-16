#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char *name;
    char *surname;
    name = "Ertugrul";
    surname = strdup(name);
    printf("%s, %s", name, surname);
}