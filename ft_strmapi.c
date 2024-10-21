#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	unsigned int i;


	if (!s || !f)
	{
		return (NULL);
	}

	new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));

	if (!new_str)
	{
		return (NULL);
	}

	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);

}

