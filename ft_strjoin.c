/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:15:04 by elikos            #+#    #+#             */
/*   Updated: 2024/10/18 18:16:04 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	first_len;
	size_t	second_len;

	first_len = ft_strlen(s1);
	second_len = ft_strlen(s2);
	result = malloc(sizeof(char) * (first_len + second_len + 1));
	if (!s1 || !s2)
	{
		return (NULL);
	}
	if (!result)
	{
		return (NULL);
	}
	ft_strlcpy(result, s1, first_len + 1);
	ft_strlcat(result, s2, first_len + second_len + 1);
	return (result);
}
