/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:32:02 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 03:45:15 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*result;

	result = (char *) malloc((ft_strlen(s) + 1) * sizeof(const char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s, ft_strlen(s));
	result[ft_strlen(s)] = '\0';
	return (result);
}

/*
#include <stdio.h>
int	main()
{
	const char	str[] = "some string";
	printf("%s\n", ft_strdup(str));
}*/
