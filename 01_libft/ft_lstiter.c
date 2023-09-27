/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:34:11 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/27 11:44:31 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node.
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	 if (!lst || !f)
                return ;
	 ft_lstiter(lst->next, f);
	 (f)(lst->content);
}
