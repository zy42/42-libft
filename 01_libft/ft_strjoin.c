/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 01:40:39 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 03:18:04 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/*Allocates (with malloc(3)) and returns a new string, 
** which is the result of the concatenation of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	new_len;

	new_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((new_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1));
	ft_memcpy(result + ft_strlen(s1), s2, ft_strlen(s2));
	*(result + new_len) = '\0';
	return (result);
}

/*
int	main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("%s\n",res);
}*/
