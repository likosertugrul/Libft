/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:05:45 by elikos            #+#    #+#             */
/*   Updated: 2024/10/20 20:05:45 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_of_digits(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		digit;
	int		is_negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digit = ft_num_of_digits(n);
	is_negative = (n < 0);
	if (is_negative)
		digit++;
	str = malloc(digit + 1);
	if (!str)
		return (NULL);
	str[digit] = '\0';
	if (is_negative)
	{
		str[0] = '-';
		n = -n;
	}
	while (digit > is_negative)
	{
		str[--digit] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
