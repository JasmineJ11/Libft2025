/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:23:03 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/17 10:23:04 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*out;
	size_t	i;

	str = (char *)s;
	out = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			out = str + i;
		}
		i++;
	}
	if (c == '\0')
	{
		return (str + i);
	}
	return (out);
}
