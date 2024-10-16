#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *str)
{
    int sign = 1;
    int i = 0;
    int result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        result = (str[i] - 48) + (result * 10);
        i++;
    }
    i++;

    return result * sign;
}

int main(void)
{
    char name[20] = "123";

    int a = atoi(name);
    int b = ft_atoi(name);

    printf("%d, %d", b, a);
}