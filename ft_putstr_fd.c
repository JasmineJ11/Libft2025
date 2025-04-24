/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:31:11 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/24 11:31:15 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if(s)
		write(fd,s,ft_strlen(s));
}

// int main(void)
// {
// 	ft_putstr_fd("aaa\n",1);
// 	ft_putstr_fd("bbb\n",2);
// }