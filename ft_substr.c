#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *result = (char*)malloc(sizeof(char) * (len + 1));
	char *start_result = result;
	i = 0;
	while (s[i])
	{
		if (i >= start && i < start + len)
		{
			*result = s[i];
			result++;
		}
		i++;
	}
	*result = 0;
	return start_result;
}