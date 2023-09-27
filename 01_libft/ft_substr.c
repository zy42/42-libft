/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:38:18 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/27 17:12:22 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"
#include "stdlib.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	min_len;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		min_len = min(len, ft_strlen(s) - start);
		if (min_len > 0)
		{
			result = (char *)malloc((min_len + 1) * sizeof(char));
			if (!result)
				return (NULL);
			result = ft_memcpy(result, s + start, min_len + 1);
			result[min_len] = '\0';
			return (result);
		}
	}
	result = (char *)malloc(1 * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, "", 1);
	return (result);
}

/*
#include <string.h>
int	main()
{
	//char const	str[] = "ABCDE";
	//char * s = ft_substr("trisdfDB", 100, 1);;
	printf("%s\n",ft_substr("hola", 2, 3));
}*/
