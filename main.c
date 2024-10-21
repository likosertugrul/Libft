/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:23:55 by elikos            #+#    #+#             */
/*   Updated: 2024/10/21 18:24:47 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		return (1);
	}
	ft_putchar_fd('d', fd);
	ft_putchar_fd('d', fd);
	ft_putstr_fd("Lorem ipsum dolor sit amet", fd);
	ft_putendl_fd("Lorem ipsum dolor sit amet", fd);
	ft_putnbr_fd(132213, fd);
	close(fd);
	return (0);
}
