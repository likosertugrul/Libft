/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:37:40 by elikos            #+#    #+#             */
/*   Updated: 2024/11/13 16:53:11 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

#include <stdio.h>
#include <ctype.h>

void	apply_function(unsigned int i, char *c)
{
	// Örnek: Sadece indeks çiftse karakteri büyük harf yapalım
	if (i % 2 == 0)
		*c = toupper(*c);
	else
		*c = tolower(*c);
}
