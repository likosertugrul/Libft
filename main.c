#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *first;
    char *result;  

    first = "Lorem ipsum dolor sit amet";
    result = ft_substr(first, 6, 10);

    printf("%s \n", result);



}
