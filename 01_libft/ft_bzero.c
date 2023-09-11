/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:55:39 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/11 16:56:08 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*

#include <stdio.h>
#include <string.h>

int	main()
{

        char str1[12] = "Test string1";
	char str2[12] = "Test string2";

        printf("Before bzero(): %s\n", str1);
	bzero(str1,5);
	printf("After bzero first 5 chars: %s\n5th chars onwards: %s\n\n", 
	str1, 
	str1+5);

	printf("Before ft_bzero(): %s\n", str2);
        ft_bzero(str2,5);

        printf("After ft_bzero() first t chars: %s\n5th chars onwards: %s\n", 
	str2, 
	str2+5);
}
*/
