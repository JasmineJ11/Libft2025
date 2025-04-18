/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:42:35 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/16 16:42:37 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i = 0;
	size_t dest_l = 0;
	size_t src_l = 0;

	//1.计算src和dest的长度。

	while(dest[dest_l] != '\0')
		dest_l++;
	while(src[src_l] != '\0')
		src_l++;

	//2.如果size <= dest，直接返回所需要的长度。
	if (size <= dest_l)
	{
		return dest_l + src_l;
	}
	
	//3. 否则就开始一个一个往后添加，再返回长度。不要忘了添加结束符。
	while(src[i] != '\0' && size > dest_l + i + 1)
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return dest_l + src_l;
	
}
int	main(void)
{
	char src[] = "summer";
	char dest[] = "imissyou";
	size_t result;
	printf("%s\n", dest);
	result = ft_strlcat(dest, src, 10);
	printf("%zu\n", result);
	printf("%s\n", dest);
}