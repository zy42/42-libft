/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:28:38 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/18 22:38:20 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i + j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i - 1);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char	first_str[999] = "Geeks";
    char	*second_str = "LONGER";

    printf("strlcat:%d\n",strlcat(first_str, second_str, 
    sizeof(first_str)));
    printf("Dest str before: %s\n", first_str);
    printf("ft_strlcat:%zu\n",ft_strlcat(first_str, second_str, 
    sizeof(first_str)));
    printf("Dest str after: %s\n", first_str);
    return (0);
}*/
