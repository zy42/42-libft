/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:38:18 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 05:25:12 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a substrin from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (len >= ft_strlen(s))
		{
			result = ft_memcpy(result, s + start, ft_strlen(s));
			result[ft_strlen(s)] = '\0';
		}
		else
		{
			result = ft_memcpy(result, s + start, len);
			result[len] = '\0';
		}
		return (result);
	}
	result[0] = '\0';
	return (result);
}
/*
#include <string.h>
int	main()
{
	//char const	str[] = "ABCDE";
	char * s = ft_substr("tripouille", 100, 1);;
	printf("%s\n",s);
}*/
