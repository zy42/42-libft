/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:24:16 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/19 22:47:37 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;
	int		res;

	counter = 0;
	res = -1;
	while (*(s + counter))
	{
		if (*(s + counter) == c)
			res = counter;
		counter++;
	}
	if (res >= 0 || *(s + counter) == c)
	{
		if (res >= 0)
			return ((char *)(s + res));
		return ((char *)(s + counter));
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int     main()
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	//char	*src = "abbbbbbbb";
	char *d1 = strrchr(src, '\0');
        char *d2 = ft_strrchr(src, '\0');
	printf("%i\n", d1 == d2);
        printf("%s\n%s\n", d1,d2);
}
*/
