/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:08:55 by elikos            #+#    #+#             */
/*   Updated: 2024/10/13 18:09:30 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, int c)
{
    int i;
    char *str;

    i = 0;
    str = (char *)s;
    while (str[i] != c)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}

int main(void)
{
    char name[20] = "Ertugrul";

    printf("%s \n", name);
}