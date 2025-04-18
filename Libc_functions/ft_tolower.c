/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:38:22 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/17 09:38:23 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return c;
}

int main(void)
{
	char c = 'A';
	int out = ft_tolower(c);
	printf("%c",out);
}