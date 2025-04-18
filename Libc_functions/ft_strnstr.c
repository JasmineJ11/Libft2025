/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawli <jiawli@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:08:21 by jiawli            #+#    #+#             */
/*   Updated: 2025/04/17 12:08:23 by jiawli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;

	size_t j ;

	if (little [0] == '\0')
	{
		return (char *) big;
	}

	while(big[i] != 0 && i < len)
	{
		j = 0;
		while(big[i+j] == little[j] && i+j <len)
		{
			if(little[j+1] == '\0')
				return (char *) big + i;
			j++;
		}

		i++;
	}
	return NULL;
}

int main(void)
{
	char *big = "12345355";
	char *little = "35";

	char *out = ft_strnstr(big, little, 8);
	printf("%s\n", out);
}