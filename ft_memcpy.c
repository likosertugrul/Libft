#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40] = "Ertugrul";
    char str2[20] = "Likos";
    memcpy(str, str2, 3);

    printf("%s \n", str);
    printf("%s \n", str2);
}