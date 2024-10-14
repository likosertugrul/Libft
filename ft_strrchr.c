/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:48:53 by elikos            #+#    #+#             */
/*   Updated: 2024/10/14 18:55:46 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*last;
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			last = (char *)(s + i);
		}
		i++;
	}
	if (c == 0)
	{
		return ((char *)(s + i));
	}
	return (last);
}
