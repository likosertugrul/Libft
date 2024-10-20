#include "libft.h"

int ft_num_of_digits(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return 1;
		
	if (n < 0)
		n = -n;

	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char *ft_itoa(int n)
{
	int	digit;
	int	is_negative;
	char *str;

	digit = ft_num_of_digits(n);
	is_negative = (n < 0) ? 1 : 0;
	if (is_negative)
		digit++;

	str = malloc(digit + 1);

	if (!str)
		return NULL;

	str[digit] = 0;

	if (is_negative)
	{
		str[0] = '-';
		n = -n;
	}

	while (digit > is_negative)
	{
		str[--digit] = (n % 10) + 48;
		n = n / 10;
	}

	return str;

}

#include <stdio.h>

int main(void)
{
    int a = 928; // Negatif sayıyı test etmek için
    char *str;

    str = ft_itoa(a);
    if (str) // malloc başarılı olduysa
    {
        printf("%s\n", str);
        free(str); // Belleği serbest bırak
    }

    return 0;
}