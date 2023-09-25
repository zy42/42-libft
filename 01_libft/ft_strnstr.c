/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:27:19 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/24 04:43:26 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	slider;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		slider = 0;
		while (*(needle + slider) && *(haystack + slider) == *(needle + slider)
			&& slider <= n)
		{
			if (!*(needle + slider + 1))
				return ((char *)haystack);
			slider++;
		}
		haystack++;
	}
	return (NULL);
}
/*
int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s\n", ft_strnstr(haystack, needle, -1));
}*/
