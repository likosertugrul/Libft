/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:42:44 by elikos            #+#    #+#             */
/*   Updated: 2024/11/13 16:56:38 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*name;
	int		i;

	name = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (name[i] == (char)c)
		{
			return (name + i);
		}
		i--;
	}
	return (0);
}
