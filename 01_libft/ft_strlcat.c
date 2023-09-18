/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:28:38 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/19 00:32:26 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	result;
	char	*s;

	s = (char *)src;
	d_len = 0;
	s_len = ft_strlen(s);
	if ((!dest || !src) && !size)
		return (0);
	while (*(dest + d_len) && d_len < size)
		d_len++;
	if (d_len < size)
		result = d_len + s_len;
	else
		return (size + s_len);
	while (*s && (d_len + 1) < size)
	{
		*(dest + d_len++) = *s++;
	}
	*(dest + d_len) = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[10] = "Hello";
	const char src[] = " World";
	ft_strlcat(dest, src, sizeof(dest));

	printf("%s\n", dest);
}*/
