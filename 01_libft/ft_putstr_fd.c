/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:18:37 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/25 23:26:40 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

/*Outputs the string ’s’ to the 
 * given filedescriptor.
 */

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
