#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

size_t ft_strlcat(char *dest, char *src, size_t dstsize)
{
    int srlen = ft_strlen(src);
    size_t i = 0;
    while (i < srlen)
    {
        dest[dstsize - 1] = src[i];
        i++;
    }

    return 0;
}


int main(void)
{
    char name[20] = "Ertugrul";
    char surname[20] = "Likos";

    printf("%s, %s\n", name, surname);

    ft_strlcat(name, surname, sizeof(name));

    printf("%s, %s", name, surname);
}
