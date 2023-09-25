/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengying <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:00:25 by zengying          #+#    #+#             */
/*   Updated: 2023/09/26 01:13:32 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* Counts the number of nodes in a list.
 * lst: The beginning of the list.
 */

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	while (lst)
	{

		count += 1;
		lst = lst->next;
	}
	return (count);
}
