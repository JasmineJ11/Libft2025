/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:01:29 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 12:01:31 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	unsigned char *s = (unsigned char *)str;
	size_t i = 0;
	while(i < n)
	{
		s[i] = 0;
		i++;
	}
	
}

int main(void)
{
	char str[] = "123456";
	ft_bzero(str,4);
	printf("%s", str);
}