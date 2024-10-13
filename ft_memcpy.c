/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:03:57 by elikos            #+#    #+#             */
/*   Updated: 2024/10/13 18:07:59 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *) dest;
	second = (unsigned char *) src;
	i = 0;
	if (!(second) && !(first))
	{
		return (NULL);
	}
	while (i < n)
	{
		first[i] = second[i];
		i++;
	}
	return (first);
}
