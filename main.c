#include <stdio.h>
#include "libft.h"
#include <string.h>


#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "gr";

    char *result;
    result = strnstr(name, surname, sizeof(name));
    printf("%s, \n", name);
    printf("%s, \n", surname);
    printf("%s, \n", result);
}