/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:40:15 by elikos            #+#    #+#             */
/*   Updated: 2024/10/18 02:18:15 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len * sizeof(char));
	i = 0;
	if (!s2)
	{
		return (0);
	}
	while (s1[i])
	{
		s2[i] = s1[i];
		i++ ;
	}
	s2[i] = 0;
	return (s2);
}
