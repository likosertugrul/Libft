#include "libft.h"
#include <stdio.h>
#include <string.h>



int main(void)
{
    char name[20] = "Ertugrul";
    char *s;
    s = strchr(name, 'u');
    printf("%ld", s - name);
}