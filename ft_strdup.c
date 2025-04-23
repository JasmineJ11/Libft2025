/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:12:38 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/19 17:12:40 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// 自动计算字符串长度
// 自动分配内存（使用 malloc）
// 复制整个字符串，包括'\0'结束符
// 返回的内存必须由调用者使用 free 释放

char	*ft_strdup(const char *s) 
{
	size_t	len;
	char	*dest;
	size_t	i;
 
	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL); 
	while (s[i] != '\0')
	{ 
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
