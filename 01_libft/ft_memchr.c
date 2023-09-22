/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:14:53 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/22 18:14:38 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (*ptr_s && n > 0)
	{
		if (*ptr_s == (unsigned char)c)
			return (ptr_s);
		ptr_s++;
		n--;
	}
	if (*ptr_s == (unsigned char)c && n > 0)
	{
		return (ptr_s);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
        int size = 10;
	printf("%p\n",memchr(src, '\200', size));
	printf("%p\n",ft_memchr(src, '\200', size));
}*/
