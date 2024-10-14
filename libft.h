/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:21:22 by elikos            #+#    #+#             */
/*   Updated: 2024/10/14 13:09:42 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

int		ft_isalpha(int c);

void	*ft_memcpy(void *dest, const void *src, size_t n);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char *ft_strchr(char *s, int c);

char *ft_strchr(char *s, int c);

#endif
