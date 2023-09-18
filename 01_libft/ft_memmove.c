/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:56:41 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/18 23:17:14 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_str;
	char	*src_str;
	size_t	i;

	dest_str = (char *)dest;
	src_str = (char *)src;
	if (!dest && !src)
		return (dest);
	i = 0;
	if (dest_str > src_str)
	{
		while (n-- > 0)
			dest_str[n] = src_str[n];
	}
	else
	{
		while (i < n)
		{
			dest_str[i] = src_str[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "ABCDEFG";
	char *str2 = str1 + 4;
	printf("Before memmove\n Dest: %s\n Src: %s\n", str1,str2);
	memmove(str1, str2, strlen(str2));
	printf("After memmove\n Dest: %s\n Src: %s\n", str1,str2);

	char str3[] = "ABCDEFG";
        char *str4 = str3 + 4;
        printf("Before ft_memmove\n Dest: %s\n Src: %s\n", str3,str4);
        ft_memmove(str3, str4, strlen(str4));
        printf("After ft_memmove\n Dest: %s\n Src: %s\n", str3,str4);
	return (0);
}
*/
