/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:23:45 by yzeng             #+#    #+#             */
/*   Updated: 2023/09/25 23:31:27 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
/* Outputs the integer ’n’ to the 
 * given file descriptor.
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n <= -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-n, fd);
		}
	}
	else if (n >= 10) 
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
