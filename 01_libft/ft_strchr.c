/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:22:31 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 04:07:46 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *) s + i);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const char src[] = "tripouille";
	printf("%c\n", 't' + 256);
	printf("%p\n", strchr(src,'t' + 256));
	printf("%p\n", ft_strchr(src,'t' + 256));
}*/
