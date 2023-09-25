/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:48:19 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/25 18:12:24 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

/* Applies the function ’f’ to each character of the string ’s’, 
 * and passing its index as first argument
 * to create a new string (with malloc(3)) 
 * resulting from successive applications of ’f’.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	result = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (0);
	while (s[i])
	{
		result[i] = f(i, (char) s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
