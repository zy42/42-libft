/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 05:06:34 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/27 17:16:01 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Allocates (with malloc(3)) and returns an array of strings 
** obtained by splitting ’s’ using the character ’c’ as a delimiter. 
** The array must end with a NULL pointer.
*/
/*static void	*set_memory(char **arr_2d, int index, size_t size)
{
	char	*arr;

	arr = (char *) malloc(sizeof(char) * size);
	if (arr)
		return (arr);
	while (index  >= 0)
	{
		free(arr_2d[index]);
		index--;
	}
	free(arr_2d);
	return (NULL);
}
*/
static size_t arr_size(char const *s, char c)
{
	size_t i = 0;
	size_t j = 0;
	while (*s)
        {
                j = 0;
		while (*s != c && *s)
		{
			s++;
			j++;
		}
                if (j > 0)
                        i++;
        }
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	size_t	arr_ele;
	size_t	i;
	size_t	start;

	
	arr_ele = 0;
	i = 0;
	if (! (arr = (char **) malloc(sizeof(char *) * arr_size(s, c))))
		return (NULL);
	while (s[i] && arr_ele < arr_size(s,c))
	{
		while (s[i] != c && s[i])
			i++;
		start = i;
		while (s[i] == c && s[i])
			i++;
		if (i > start)
		{
                        arr[arr_ele] = (char *) malloc(sizeof(char) * (i - start));
                        if (!arr[arr_ele])
			{
				free(arr);
                                return (NULL);
			}
                        arr[arr_ele] = ft_substr(s,start, i - start);
			arr_ele++;
		}
	}
	arr[arr_ele] = NULL;
	return (arr);
}

/*
int main()
{
	char **arr = ft_split("hello!", 32);
	int i = 0;
	//printf("%s\n", arr[0]);
	while (arr[i])
	{
		printf("%s\n",arr[i]);
		i++;
	}
}
*/
