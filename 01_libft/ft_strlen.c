/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:06:38 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/18 22:40:58 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count += 1;
	}
	return (count);
}

/*
#include <stdio.h>

int	main()
{
	const char *str_arr[] =
	{
		"First","Second","Third entry",NULL
	};
	int index = 0;
        while (str_arr[index] != NULL)
        {
                const	char *c = str_arr[index];
                char *result = (strlen(c) == ft_strlen(c)) ? 
		"PASSED": "FAILED";
                printf("Input: %s; Expect: %ld; Result: %ld; 
Test: %s\n", c, 
strlen(c), ft_strlen(c), result);
		index++;
	}
}
*/
