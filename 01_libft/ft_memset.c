/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:01 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/11 16:17:42 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
        int c = 'x';
        char str1[12] = "Test string1";
	char str2[12] = "Teststr2";

        printf("Before memset(): %s\n", str1);
	memset(str1,c,5);
	printf("After memset(): %s\n\n", str1);

	printf("Before ft_memset(): %s\n", str2);
        ft_memset(str2,c,5);
        printf("After ft_memset(): %s\n", str2);

}
*/
