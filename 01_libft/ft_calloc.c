/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:05:25 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 03:47:56 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = (void *) malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int size = 8254;
	void * d1 = calloc(0,0);
        void * d2 = ft_calloc(0,0);
	printf("%p\n%p\n",d1,d2);
}*/
