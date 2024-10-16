/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:32:21 by elikos            #+#    #+#             */
/*   Updated: 2024/10/16 17:33:40 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

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
