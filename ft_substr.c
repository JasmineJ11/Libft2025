/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:53:44 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/20 10:53:47 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 从指定位置开始提取指定长度的子字符串
// 自动分配内存
// 返回的子字符串以'\0'结尾
// 处理边界情况（如start超出字符串长度）
// 返回的内存必须由调用者释放
// 1.如果src是空就返回空，否则就计算s长度。
// 2.确定dest的长度。
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*dest;

	s_len = 0;
	if (s == NULL)
		return (NULL);
	while (s[s_len])
	{
		s_len++;
	}
	if (start > s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s + (size_t)start, len);
	dest[len] = '\0';
	return (dest);
}
