#include "libft.h"
#include <stdio.h>

int ft_isspace(char s)
{
    return (s == ' ' || s == '\n' || s == '\t' || s == '\r' || s == '\v' || s == '\f');
}

int ft_isdelimeter(char s)
{
    return (s == ',' || s == ';' || s == ' ' || s == '\t' || 
        s == '\n' || s == '|' || s == ':' || s == '/' || 
        s == '=' || s == '.');
}


char **ft_split(char const *s)
{
    char **result;
    int i = 0;
    while (s[i])
    {
        if (!(ft_isspace(s[i]) || ft_isdelimeter(s[i])))
        {
            ft_strlcpy(*result[i], s, i);
        }
        i++;
    }
}

int main(void)
{
char *str;
str = "Lorem, ipsum, dolor, sit, amet";
ft_split(str);
int i = 0;
while (i < 4)
{
    printf("%s \n", str[i]);
    i++;
}
}