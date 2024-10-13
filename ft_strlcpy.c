/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:09:44 by elikos            #+#    #+#             */
/*   Updated: 2024/10/13 18:14:36 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (len);
	}
	while (i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != 0)
	{
		dest[i] = 0;
		i++;
	}
	return (len);
}
