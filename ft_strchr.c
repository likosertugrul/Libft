/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:08:55 by elikos            #+#    #+#             */
/*   Updated: 2024/10/14 13:09:51 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, int c)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] == (char)c)
        {
            return (char *)(s + i);
        }
        i++;
    }

    if (c == 0)
    {
        return (char *)(s + i);
    }
    return NULL;
}
