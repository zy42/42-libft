/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:14:53 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/23 04:52:14 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (void *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	//char *src = "/|\x12\xff\x09\x42\2002\42|\\";
	//char *src = "376(78)";
	const int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    	printf("%s\n", (char *)memchr(tab, -1, 6));
	printf("%s\n", (char *)ft_memchr(tab, -1, 6));
	//printf("%p\n",memchr(src, 'x', size));
	//printf("%p\n",ft_memchr(src, 'x', size));
}*/
