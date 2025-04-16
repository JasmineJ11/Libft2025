/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:15:26 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 17:15:28 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
retract
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c + 32;
	}
	return (c);
}

int	main(void)
{
	int i = 0;
	char str[] = "Test String.\n";
	char c;
	while (str[i])
	{
		c = str[i];
		putchar(ft_toupper(c));
		i++;
	}
	return (0);
}