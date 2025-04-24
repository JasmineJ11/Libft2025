/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:39:22 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/24 10:39:25 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
// 	ft_putchar_fd('H', 1);
// 	ft_putchar_fd('i', 1);
// 	ft_putchar_fd('\n', 1);

// 	ft_putchar_fd('!', 2);
// 	ft_putchar_fd('\n', 2);

// 	return (0);
// }