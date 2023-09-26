/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 05:06:34 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/26 19:13:31 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Allocates (with malloc(3)) and returns an array of strings 
** obtained by splitting ’s’ using the character ’c’ as a delimiter. 
** The array must end with a NULL pointer.
*/

static void	*set_memory_2d(size_t size)
{
	char	**arr;

	arr = (char **) malloc(sizeof(char *) * size);
	if (!arr)
		return (NULL);
	return (arr);
}

static void	*set_memory(size_t size)
{
	char	*arr;

	arr = (char *) malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	arr = set_memory_2d((ft_strlen(s) + 1));
	while (*s)
	{
		j = 0;
		arr[i] = set_memory(ft_strlen(s) + 1);
		while (*s != c && *s)
		{
			arr[i][j] = *s;
			s++;
			j++;
		}
		arr[i][j] = '\0';
		if (j > 0)
			i++;
		while (*s == c && *s)
			s++;
	}
	arr[i] = NULL;
	return (arr);
}
/*
int main()
{
	char **arr = ft_split("  tripouille  42  ", ' ');
	int i = 0;
	//printf("%s\n", arr[0]);
	while (arr[i])
	{
		printf("%s\n",arr[i]);
		i++;
	}
}
*/
