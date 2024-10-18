#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t s_len;
	size_t set_len;
	size_t i;
	char *result;

	s_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	result = malloc(sizeof(char) * (s_len + 1));
	i = 0;
	while (i <= set_len)
	{
		if (!ft_strncmp(s1, set, s_len))
		{
			ft_strlcpy(result, s1, set_len);
		}
		i++;
	}
	return result;



}

#include <stdio.h>
int main(void)
{
    char *s1;
    char *s2;
    char *result;

    s1 = "Lorem safsf meroL";
    s2 = "Lorem";
    result = ft_strtrim(s1, s2);

    printf("%s \n", result);

}
