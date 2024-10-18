#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	char *result;

	if (!s1 || !set)
		return NULL;

	start = 0;
	end = ft_strlen(s1);

	// s1'in başındaki set'teki karakterleri atla
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	// s1'in sonundaki set'teki karakterleri atla
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	// Sonuç için gerekli bellek tahsisi
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return NULL;

	// Kırpılmış kısmı kopyala
	ft_strlcpy(result, &s1[start], end - start + 1);

	return result;
}

#include <stdio.h>

int main(void)
{
	char *s1 = "Lorem meroL";
	char *set = "Ler";
	char *result = ft_strtrim(s1, set);

	printf("%s\n", result); // Beklenen çıktı: "orem mero"
	free(result);

	return 0;
}
