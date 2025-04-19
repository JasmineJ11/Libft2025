/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:43:30 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 09:43:32 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_l;
	size_t	i;

	src_l = 0;
	while (src[src_l] != 0)
	{
		src_l++;
	}
	if (size == 0)
	{
		return (src_l);
	}
	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_l);
}

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	src_len;
// 	size_t	i;

// 	src_len = ft_strlen(src);
// 	if (size == 0)
// 		return (src_len);
// 	i = 0;
// 	while (src[i] != '\0' && i < size - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (src_len);
// }