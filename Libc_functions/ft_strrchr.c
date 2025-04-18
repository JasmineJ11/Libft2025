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

char *ft_strrchr(const char *s, int c)
{
	char *str = (char *) s;
	char *out = NULL;

	size_t i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == c)
		{
			out = str + i;
		}
		i++;
	}

	if (c == '\0')
	{
		return str + i;
	}

	return out;

}

int main(void)
{
	char str[] = "abcdecaa";
	char *out = ft_strrchr(str,'\0');
	printf("%s\n",out);
}