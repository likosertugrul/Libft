/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:44:09 by elikos            #+#    #+#             */
/*   Updated: 2024/10/18 01:58:29 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	while (*s)
	{
		if (*s == x)
		{
			return ((char *)s);
		}
		s++;
	}
	if (x == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
