/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:39:30 by elikos            #+#    #+#             */
/*   Updated: 2024/10/18 17:41:57 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;

	s_len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!s)
	{
		return (NULL);
	}
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (start + len > s_len)
	{
		len = s_len - start;
	}
	if (!result)
	{
		return (NULL);
	}
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
