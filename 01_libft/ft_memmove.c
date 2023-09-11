/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:56:41 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/11 18:42:06 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

	unsigned char	*ptr_dest = dest;
	unsigned char	*ptr_src = src;
	unsigned char	*temp;
	size_t			i;

	//ptr_dest = (unsigned char *)dest;
	//ptr_src = (unsigned char *)src;
	temp = char[n];
	i = 0;
	if (ptr_dest == NULL || ptr_src == NULL)
		return (NULL);
	while (i < n)
	{
		temp[i] = ptr_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = temp[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "ABCDEFG";
	char *str2 = str1 + 4;
	printf("str1 before memmove: %s\n", str1);
	memmove(str1, str2, sizeof(str2));
	printf("str1 after memmove: %s\n\n", str1);

	char str3[] = "ABCDEFG";
        char *str4 = str3 + 4;
        printf("str1 before ft_memmove: %s\n", str3);
        ft_memmove(str3, str4, sizeof(str4));
        printf("str1 after ft_memmove: %s\n", str3);
	return (0);
}
*/
