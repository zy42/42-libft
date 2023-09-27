/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:03:40 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/27 16:26:06 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Allocates (with malloc(3)) and returns a copy of 's1' with 
** the characters specified in ’set’ removed
** from the beginning and the end of the string.
*/
static	int	to_remove(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	while (to_remove(s1[i], set) && s1[i])
		i++;
	j = ft_strlen(s1);
	while (to_remove(s1[j - 1], set) && j > i)
		j--;
	result = (char *) malloc((j - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (i == j)
		ft_memcpy(result, "", 1);
	else
	{
		ft_memcpy(result, s1 + i, j - i);
		result[j - i] = '\0';
	}
	return (result);
}

/*
int main()
{
	char const *set = "";
	char const *str = "";
	printf("%s\n",ft_strtrim(str,set));
}*/
