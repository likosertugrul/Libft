#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    if (*needle == 0)
    {
        return (char *)haystack;
    }

    while (i < len && haystack[i])
    {
        while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == 0)
            {
                return (char *)haystack + i;
            }
            j++;
        }
        i++;
    }
    return NULL;
}
