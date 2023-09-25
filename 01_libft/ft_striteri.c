/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:58:52 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/25 18:11:56 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*Applies the function ’f’ on each character of
 * the string passed as argument, passing its index as first argument. 
 * Each character is passed byaddress to ’f’ to be modified if necessary.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
