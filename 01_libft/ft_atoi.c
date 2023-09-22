/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:42:05 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/23 04:37:18 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_space(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (is_space(nptr[i]))
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
int	main()
{
	printf("%i\n", atoi("   +12464"));
	printf("%i\n", ft_atoi("   +12464"));
}*/
