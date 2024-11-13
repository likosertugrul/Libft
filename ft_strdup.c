/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:27:31 by elikos            #+#    #+#             */
/*   Updated: 2024/11/13 16:53:29 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}
