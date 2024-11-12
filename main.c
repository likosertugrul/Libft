#include "libft.h"


int main(void)
{
    char *s = ft_strdup("Lorem ipsum dolor sit amet");
    char delimeter = ' ';
    char **res;

    res = ft_split(s, delimeter);

    int i = 0;
    while (res[i])
    {
        printf("%s, \n", res[i]);
        i++;
    }
    
    
}