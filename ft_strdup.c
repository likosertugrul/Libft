#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
char *ft_strdup(const char *s1)
{
    int len = ft_strlen(s1) + 1;
    char *s2;
    s2 = (char *)malloc(len * sizeof(char));
    int i = 0;
    if (!s2)
    {
        return 0;
    }
    while (s1[i])
    {
        s2[i] = s1[i];
        i++ ;
    }
    s2[i] = 0;
    return s2;
}