/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 06:03:19 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/28 18:24:41 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Allocates (with malloc(3)) and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled.
*/
static int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

static size_t	num_len(int num)
{
	size_t	count;

	count = 1;
	while (ft_abs(num / 10) >= 1)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static void	update(char *str, int num, int *p_index)
{
	if (!ft_abs(num / 10))
		str[*p_index] = ft_abs(num) + '0';
	else
	{
		update(str, ft_abs(num / 10), p_index);
		*p_index += 1;
		update(str, ft_abs(num % 10), p_index);
	}
}

char	*ft_itoa(int n)
{
	int		index;
	int		*p_index;
	size_t	len;
	char	*str;

	index = 0;
	p_index = &index;
	len = num_len(n);
	if (n < 0)
		len += 1;
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	if (n < 0)
	{
		str[*p_index] = '-';
		*p_index += 1;
	}
	update(str, n, p_index);
	str[len] = 0;
	return (str);
}
/*
int	main()
{
	int num = -2147483648;
	char *res = ft_itoa(num);
	printf("%zu\n%s\n",num_len(num),res);
}*/
