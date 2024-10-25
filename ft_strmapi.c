/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:02:39 by elikos            #+#    #+#             */
/*   Updated: 2024/10/25 02:52:46 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

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



// #include "libft.h"

// char *ft_strmapi(char const *s,char (*f)(unsigned int, char))
// {
//     char *new_str;
//     unsigned int i;

//     if (!s || !f)
//         return NULL;

//     new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));

//     if (!new_str)
//         return NULL;

//     i = 0;
//     while (s[i])
//     {
//         new_str[i] = f(i, s[i]);
//         i++;
//     }
//     return new_str;
// }



void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]); // f fonksiyonu her karakteri güncelleyecek
        i++;
    }
}
