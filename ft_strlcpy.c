/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:05:37 by elikos            #+#    #+#             */
/*   Updated: 2024/10/15 20:06:25 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (src == NULL)
	{
		return (0);
	}
	if (dstsize == 0)
	{
		return (len);
	}
	while ((i < (dstsize - 1)) && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}
