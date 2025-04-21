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
	size_t	s_len;
	char	*dest;

	s_len = 0;
	// size_t	i = 0;
	// 1.如果src是空就返回空，否则就计算s长度。
	if (s == NULL)
		return (NULL);
	while (s[s_len])
	{
		s_len++;
	}
	// 2.确定dest的长度。
	if (start > s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s + (size_t)start, len);
	// while(i< len)
	// {
	// 	dest[i] = s[start + i];
	// 	i++;
	// }
	dest[len] = '\0';
	return (dest);
}
