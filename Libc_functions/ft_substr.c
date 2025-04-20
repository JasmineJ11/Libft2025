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

#include "libft.h"

//

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len = 0;
	char	*dest;
	size_t	d_len;

	//1.如果src是空就返回空，否则就计算s长度。
	if (s == NULL)
		return (NULL);

	while (s[s_len])
	{
		s_len++;
	}

	//2.计算dest的长度。
	//如果开始的位置大于s的长度，d的长度就为0，之后就可以返回空；
	if (start > s_len)
		d_len = 0;

	// 否则:
	else
	{
		//如果开始的长度虽然小于s，但要提取的子字符串长度大于s长度－开始位置:HELLO. 5-4 < 3
		//d的长度最多只能为s_len － 开始长度。
		if (s_len - start < len)
			d_len = s_len - start;
		//如果开始的位置既小于s长度（在中间），子字符串要提取的长度(从结尾到start+len)开始要大于子字符串长度.
		//那么这个输入的长度就是d的长度。
		else
		{
			d_len = len; 
		}
	}

	dest = malloc(sizeof(char) * (d_len + 1));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s + start, d_len);
	dest[d_len] = '\0';

	return (dest);
}

int main(void)
{
	char *src = "123456789";
	char *dest;
	dest = ft_substr(src, 5, 2);
	printf("%s\n", dest);
}