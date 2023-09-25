/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:08:11 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/25 18:29:57 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

/* Outputs the character ’c’ to the 
 * given file descriptor.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
