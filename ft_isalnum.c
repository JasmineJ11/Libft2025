/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:00:44 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 10:00:47 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0)
	{
		return (1);
	}
	else if (ft_isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     int out = ft_isalnum('a');
//     printf("%d", out);
// 	printf("hello");
// }
