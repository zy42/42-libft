/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:27:19 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/23 04:07:49 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p_big;
	size_t	slider;

	slider = 0;
	if (!*little)
		return ((char *)big);
	while (*big && *(little + slider) && len > 0)
	{
		if (*big == *(little + slider))
		{
			p_big = (char *)big;
			slider++;
		}
		else
			slider = 0;
		big++;
		len--;
	}
	if (slider == ft_strlen(little))
		return (p_big - slider + 1);
	return (0);
}
/*
int main()
{
	const char *big = "abcdefgh";
	const char *little = "abc";
	printf("%s\n",ft_strnstr(big, little, 4));
}*/
