#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;
    while (*haystack)
    {
        if (*haystack == needle[i])
        {
            haystack++;
        }
        i++;
    }
    return haystack;
}

int main(void)
{
    char *haystack;
    char *needle;
    char *res;
    char *son;

    haystack = "Ertugrul";
    needle = "gr";
    res = strnstr(haystack, needle, 8);
    son = ft_strnstr(haystack, needle, 8);

    printf("%s, %s", res, son);
}
