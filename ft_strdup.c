/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:40:15 by elikos            #+#    #+#             */
/*   Updated: 2024/10/19 17:02:36 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len * sizeof(char));
	i = 0;
	if (!s2)
	{
		return (0);
	}
	while (s1[i])
	{
		s2[i] = s1[i];
		i++ ;
	}
	s2[i] = 0;
	return (s2);
}




// #include "libft.h"

// char	*ft_strdup(const char *s1)
// {
// 	int len = ft_strlen(s1);
// 	char *s2;
// 	s2 = malloc(sizeof(char) * (len + 1));

// 	if (s2 == NULL)
// 		return NULL;

// 	ft_strlcpy(s2, s1, len + 1);

// 	return s2;

// }

// #include <stdio.h>
// int main(void)
// {
// 	char *first;
// 	char *second;

// 	first = "Lorem ipsum dolor sit amet";
// 	second = ft_strdup(first);

// 	printf("%s, %s", first, second);
// }