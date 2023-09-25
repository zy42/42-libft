/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 06:03:19 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 07:09:31 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* Allocates (with malloc(3)) and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled.
*/
void	update(char *str,int num, int index)
{
	if (num > 10)
	{
		update(str,num / 10,index);
                index++;
        	update(str,num % 10, index);
	}
	else
		update(str,num % 10, index);
}

int	int_len(int n)
{
	int	i;

	i  = 0;
	if (n < 0)
		n *= -1;
	while (n / 10)
	{
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	int	index = 0;
	char	*str;

	//printf("%i", int_len(n));
	str = (char *) malloc (sizeof(char) * (12));
	update(str, n, 0);
}

int	main()
{
	printf("%s\n", ft_itoa(12));
}
