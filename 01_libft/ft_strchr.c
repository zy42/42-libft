/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:22:31 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/19 22:28:25 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const char src[] = "teste";
	printf("%s\n", strchr(src,'\0'));
	printf("%s\n", ft_strchr(src,'\0'));
}*/
