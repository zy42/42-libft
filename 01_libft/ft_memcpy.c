/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:19:53 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/27 15:21:02 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "ABCDEFG";
	char str2[] = "1234567";
	printf("str1 before memcpy: %s\n", str1);
	memcpy(str1, str2, sizeof(str2));
	printf("str1 after memcpy: %s\n\n", str1);

	char str3[] = "ABCDEFG";
        char str4[] = "1234567";
        printf("str1 before ft_memcpy: %s\n", str3);
        ft_memcpy(str3, str4, sizeof(str4));
        printf("str1 after ft_memcpy: %s\n", str3);
}
*/
