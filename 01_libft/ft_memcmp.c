/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:15:10 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/23 02:34:56 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			counter;	

	counter = 0;
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (counter < n)
	{
		if (p_s1[counter] != p_s2[counter])
			return (p_s1[counter] - p_s2[counter]);
		counter++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%i\n", memcmp("t\200", "t\0", 2));
	printf("%i\n", ft_memcmp("t\200", "t\0", 2));
}*/
