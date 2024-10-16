#include <stdio.h>
#include <string.h>


int ft_memcmp(const void *s1, const void *s2, size_t len)
{
    size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] || str2[i]) && (i < len))
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
int main(void)
{
    char name[20] = "ertugrul";
    char nema[20] = "erturul";

    int a = memcmp(name, nema, 5);
    int b = ft_memcmp(name, nema, 5);

    printf("%d, %d \n", a, b);
}