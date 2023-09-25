/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 06:03:19 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/25 19:04:04 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Allocates (with malloc(3)) and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled.
*/
static void	update(char *str, int num, int *p_index)
{
	if (num < 0)
		num *= -1;
	if (num >= 10)
	{
		update(str, num / 10, p_index);
		*p_index += 1;
		update(str, num % 10, p_index);
	}
	else
		str[*p_index] = num % 10 + '0';
}

/* int_min > int_max
 * control for int_min (–2147483648)
 * if not, leads to overflow when int_min * -1
 */

char	*set_memory(void)
{
	char	*str;

	str = (char *) malloc (sizeof(char) * (12));
	if (!str)
		return (0);
	return (str);
}

char	*ft_itoa(int n)
{
	int		index;
	int		*p_index;
	char	*str;

	index = 0;
	p_index = &index;
	str = set_memory();
	if (n < 0)
	{
		if (n <= -2147483648)
		{
			str = "-2147483648\0";
			return (str);
		}
		str[*p_index] = '-';
		*p_index += 1;
		update(str, n * -1, p_index);
	}
	else
		update(str, n, p_index);
	str[*p_index + 1] = '\0';
	return (str);
}

/*int	main()
{
	char *res = ft_itoa(-2147483647 -1);
	printf("%s",res);
}*/
