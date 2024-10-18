/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:32:21 by elikos            #+#    #+#             */
/*   Updated: 2024/10/18 01:57:14 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*s;

	x = (unsigned char)c;
	s = (unsigned char *)str;
	while (n--)
	{
		if (*s == x)
		{
			return ((void *)s);
		}
		s++;
	}
	return (NULL);
}
