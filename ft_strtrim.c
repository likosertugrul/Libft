// #include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t start;
// 	size_t end;
// 	char *result;

// 	start = 0;
// 	end = ft_strlen(s1);

// 	if (!s1 || !set)
// 		return NULL;


// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		start++;

// 	while (end > start && ft_strchr(set, s1[end - 1]))
// 		end--;

// 	result = malloc(sizeof(char) * (end - start + 1));

// 	if (!result)	
// 		return NULL;

// 	ft_strlcpy(result , &s1[start], end - start + 1);

// 	return result;
// }