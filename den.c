#include <stdio.h>

int main(void)
{
    char *strs[] = {"Evet", "merhaba", "selamlar"};
    int a[] = {3, 543, 54 , 23};
    int i = 0;
    while (i < 3)
    {
        printf("%s \n", strs[i]);
        printf("%d\n", a[i]);
        i++;
    }

    int first = 928;
    int second = 10;
    int result = first / second;
    printf("%d", result);
}