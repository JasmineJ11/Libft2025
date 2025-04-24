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
	const char	*str =  s;
	unsigned char chr  = (unsigned char) c;
	const char 	*out  = NULL;
	size_t	i;


	
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == chr)
		{
			out = str + i;
		}
		i++;
	}
	if (chr == '\0')
	{
		return (char *)(str + i);
	}
	return (char*)out;
}
// int	main(void)
// {
// 	char s[] = "tripouille";
// 	char *out = ft_strrchr(s, 't' + 256);
// 	printf("%s\n", out);
// }