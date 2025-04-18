/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:42:09 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/17 09:42:11 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr (const char *s, int c)
{
	char *str = ( char *)s;

	size_t i = 0;
	while(str[i])
	{
		if (str[i] == c)
		{
			return str + i;
		}
		i++;
	}

	if ( c == '\0')
	{
		return str + i;
	}
	return NULL;
}

int main(void)
{
	char str[] = "abcde";
	char *out = ft_strchr(str,'\0');
	printf("%s\n",out);
}