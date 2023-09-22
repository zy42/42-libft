/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:38:18 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/23 04:43:10 by yzeng            ###   ########.fr       */
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

	result = (char *) malloc(len * sizeof(char));
	result = ft_memcpy(result, s + start, len);
	return (result);
}

/*
int	main()
{
	char const *s = "test124";
	printf("%s\n",ft_substr(s, 2,5));
}*/
