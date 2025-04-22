/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:02:02 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/15 12:02:03 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//不会自动分配内存
//不检查'\0'结束符
//源区域和目标区域不能重叠（重叠时应使用 memmove）

#include <stdio.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
